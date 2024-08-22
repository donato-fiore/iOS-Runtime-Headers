// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSWSTRINGDONATION_H
#define PPSWSTRINGDONATION_H

@class NSString, PPSource;
@protocol BMIdentifiableContentEvent;

#import <Foundation/Foundation.h>


@interface PPSWStringDonation : NSObject <BMIdentifiableContentEvent>

 {
    ? uniqueId;
    ? extractionContent;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: absoluteTimestamp
@property (nonatomic, copy) NSString *extractionContent;
@property (nonatomic) BOOL shouldConsume; // ivar: shouldConsume
@property (nonatomic, retain) PPSource *source; // ivar: source
@property (nonatomic, copy) NSString *uniqueId;


-(id)init;
-(id)initWithLabeledStrings:(id)arg0 bundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 ;


@end


#endif