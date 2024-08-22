// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYANIMATIONTRACKER_H
#define PXCURATEDLIBRARYANIMATIONTRACKER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface PXCuratedLibraryAnimationTracker : NSObject

@property (readonly, nonatomic) NSMutableSet *inFlightAnimations; // ivar: _inFlightAnimations


+(id)sharedTracker;
+(void)_scrollAnimationOccurredWithContext:(struct ? )arg0 isBegin:(BOOL)arg1 ;
+(void)scrollAnimationDidBeginWithScrollContext:(struct ? )arg0 ;
+(void)scrollAnimationDidEndWithScrollContext:(struct ? )arg0 ;
-(id)init;
-(void)_zoomLevelTransitionOccurred:(id)arg0 isPreparation:(BOOL)arg1 isBegin:(BOOL)arg2 ;
-(void)zoomLevelTransitionDidBegin:(id)arg0 ;
-(void)zoomLevelTransitionDidEnd:(id)arg0 ;
-(void)zoomLevelTransitionPreparationDidBegin:(id)arg0 ;
-(void)zoomLevelTransitionsDidEndEarly;


@end


#endif