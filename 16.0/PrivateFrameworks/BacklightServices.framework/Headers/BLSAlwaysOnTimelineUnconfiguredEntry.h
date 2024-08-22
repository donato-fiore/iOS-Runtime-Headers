// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSALWAYSONTIMELINEUNCONFIGUREDENTRY_H
#define BLSALWAYSONTIMELINEUNCONFIGUREDENTRY_H

@protocol NSObject><NSCopying, NSObject;


#import "BLSAlwaysOnTimelineEntry.h"

@interface BLSAlwaysOnTimelineUnconfiguredEntry : BLSAlwaysOnTimelineEntry

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic) CGFloat duration;
@property (nonatomic) NSInteger requestedFidelity;
@property (retain, nonatomic) NSObject<NSObject><NSCopying> *timelineIdentifier;
@property (retain, nonatomic) NSObject<NSObject> *userObject;


+(id)entryForPresentationTime:(id)arg0 ;
+(id)entryForPresentationTime:(id)arg0 animated:(BOOL)arg1 userObject:(id)arg2 ;
+(id)entryForPresentationTime:(id)arg0 withRequestedFidelity:(NSInteger)arg1 ;
+(id)entryForPresentationTime:(id)arg0 withRequestedFidelity:(NSInteger)arg1 animated:(BOOL)arg2 userObject:(id)arg3 ;
-(id)initWithPresentationTime:(id)arg0 requestedFidelity:(NSInteger)arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 timelineIdentifier:(id)arg4 userObject:(id)arg5 ;


@end


#endif