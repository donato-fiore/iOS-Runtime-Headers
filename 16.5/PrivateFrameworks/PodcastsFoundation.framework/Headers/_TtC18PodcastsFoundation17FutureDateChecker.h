// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PODCASTSFOUNDATION17FUTUREDATECHECKER_H
#define _TTC18PODCASTSFOUNDATION17FUTUREDATECHECKER_H


#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundation17FutureDateChecker : NSObject {
    ? leniency;
    ? assertionLeniency;
    ? assertOnFutures;
}




+(BOOL)sharedInstanceShouldAssertTestsOnly;
+(id)lenientSharedInstance;
+(id)sharedInstance;
+(void)setSharedInstanceShouldAssertTestsOnly:(BOOL)arg0 ;
-(BOOL)isFutureWithDate:(id)arg0 boundBy:(id)arg1 ;
-(BOOL)isFutureWithTimestamp:(CGFloat)arg0 ;
-(BOOL)isFutureWithTimestamp:(CGFloat)arg0 boundBy:(CGFloat)arg1 ;
-(CGFloat)timestamp:(CGFloat)arg0 boundBy:(CGFloat)arg1 ;
-(CGFloat)timestampBoundByNow:(CGFloat)arg0 ;
-(CGFloat)timestampBoundByNowForDate:(id)arg0 ;
-(CGFloat)timestampForDate:(id)arg0 boundBy:(id)arg1 ;
-(id)init;


@end


#endif