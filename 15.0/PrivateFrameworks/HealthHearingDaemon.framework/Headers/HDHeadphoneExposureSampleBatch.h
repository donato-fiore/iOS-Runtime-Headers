// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEADPHONEEXPOSURESAMPLEBATCH_H
#define HDHEADPHONEEXPOSURESAMPLEBATCH_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface HDHeadphoneExposureSampleBatch : NSObject

@property (retain, nonatomic) NSNumber *anchor; // ivar: _anchor
@property (nonatomic) BOOL canTriggerUserNotification; // ivar: _canTriggerUserNotification
@property (nonatomic, getter=isJournaled) BOOL journaled; // ivar: _journaled
@property (retain, nonatomic) NSArray *samples; // ivar: _samples


+(id)batchWithAddedSamples:(id)arg0 anchor:(id)arg1 ;
+(id)batchWithJournaledSamples:(id)arg0 ;
-(id)_initWithSamples:(id)arg0 journaled:(BOOL)arg1 anchor:(id)arg2 ;


@end


#endif