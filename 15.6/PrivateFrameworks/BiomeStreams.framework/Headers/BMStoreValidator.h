// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMSTOREVALIDATOR_H
#define BMSTOREVALIDATOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BPSBiomeStorePublisher.h"

@interface BMStoreValidator : NSObject {
    NSString *_identifier;
    BPSBiomeStorePublisher *_publisher;
}




-(id)init;
-(id)initWithIdentifier:(id)arg0 storeConfig:(id)arg1 ;
-(int)isChronologicallyValidFromBookmark:(id)arg0 shouldContinue:(id)arg1 ;
-(int)isChronologicallyValidFromTimestamp:(CGFloat)arg0 ;
-(int)isChronologicallyValidFromTimestamp:(CGFloat)arg0 shouldContinue:(id)arg1 ;
-(int)isChronologicallyValidWithPublisher:(id)arg0 shouldContinue:(id)arg1 ;


@end


#endif