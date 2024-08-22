// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYPACINGAUTOINCREMENTINGTIMESOURCE_H
#define PXSTORYPACINGAUTOINCREMENTINGTIMESOURCE_H

@class NSString;
@protocol PXStoryPacingTimeSource, PXStoryPacingTimeSourceDelegate, PXStoryPacingClock;

#import <Foundation/Foundation.h>

#import "PXDisplayLink.h"

@interface PXStoryPacingAutoIncrementingTimeSource : NSObject <PXStoryPacingTimeSource>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) ? currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXStoryPacingTimeSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXStoryPacingClock> *pacingClock; // ivar: _pacingClock
@property (retain, nonatomic) PXDisplayLink *playLink; // ivar: _playLink
@property (readonly) Class superclass;


-(void)_handlePlayLink:(id)arg0 ;


@end


#endif