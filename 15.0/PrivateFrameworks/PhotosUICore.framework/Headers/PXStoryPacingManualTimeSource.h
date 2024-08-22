// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPACINGMANUALTIMESOURCE_H
#define PXSTORYPACINGMANUALTIMESOURCE_H

@class NSString;
@protocol PXStoryPacingTimeSource, PXStoryPacingTimeSourceDelegate;

#import <Foundation/Foundation.h>


@interface PXStoryPacingManualTimeSource : NSObject <PXStoryPacingTimeSource>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) ? currentTime; // ivar: _currentTime
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXStoryPacingTimeSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)incrementByTime:(struct ? )arg0 ;


@end


#endif