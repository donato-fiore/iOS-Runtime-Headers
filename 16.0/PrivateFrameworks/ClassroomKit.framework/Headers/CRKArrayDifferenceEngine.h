// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKARRAYDIFFERENCEENGINE_H
#define CRKARRAYDIFFERENCEENGINE_H

@class NSString;
@protocol CRKArrayDifferenceConfiguration;

#import <Foundation/Foundation.h>


@interface CRKArrayDifferenceEngine : NSObject {
    NSObject *mObject;
    NSString *mKeyPath;
}


@property (retain, nonatomic) NSObject<CRKArrayDifferenceConfiguration> *configuration; // ivar: _configuration


// +(id)configurationWithIncomingItemsIdentifierFunction:(id)arg0 publishedItemsIdentifierFunction:(unk)arg1  ;
+(id)identityConfiguration;
-(id)initWithObject:(id)arg0 keyPath:(id)arg1 configuration:(id)arg2 ;
-(void)updateWithNewArray:(id)arg0 ;


@end


#endif