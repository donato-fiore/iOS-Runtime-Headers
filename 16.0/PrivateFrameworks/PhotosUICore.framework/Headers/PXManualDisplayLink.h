// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMANUALDISPLAYLINK_H
#define PXMANUALDISPLAYLINK_H

@class NSString;
@protocol PXDisplayLinkProtocol;

#import <Foundation/Foundation.h>


@interface PXManualDisplayLink : NSObject <PXDisplayLinkProtocol>



@property (readonly, nonatomic) CGFloat currentMediaTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger frameRateRangeType; // ivar: _frameRateRangeType
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int highFrameRateReason; // ivar: _highFrameRateReason
@property (nonatomic) BOOL paused; // ivar: _paused
@property (nonatomic) NSInteger preferredFramesPerSecond; // ivar: _preferredFramesPerSecond
@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic) CGFloat targetTimestamp; // ivar: _targetTimestamp
@property (readonly, nonatomic) CGFloat timestamp;


-(id)initWithWeakTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)incrementTargetTimeWithInterval:(CGFloat)arg0 ;
-(void)invalidate;


@end


#endif