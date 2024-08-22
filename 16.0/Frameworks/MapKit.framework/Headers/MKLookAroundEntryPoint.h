// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKLOOKAROUNDENTRYPOINT_H
#define MKLOOKAROUNDENTRYPOINT_H

@class GEOCameraFrame, VKMuninMarker, GEOMuninViewState;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKLookAroundEntryPoint : NSObject

@property (retain, nonatomic) GEOCameraFrame *cameraFrameOverride; // ivar: _cameraFrameOverride
@property (nonatomic) CGFloat heading; // ivar: _heading
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (retain, nonatomic) VKMuninMarker *muninMarker; // ivar: _muninMarker
@property (retain, nonatomic) GEOMuninViewState *muninViewState; // ivar: _muninViewState
@property (nonatomic) int triggerAction; // ivar: _triggerAction
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) BOOL wantsCloseUpView; // ivar: _wantsCloseUpView


+(id)entryPointWithMapItem:(id)arg0 ;
+(id)entryPointWithMapItem:(id)arg0 triggerAction:(int)arg1 ;
+(id)entryPointWithMapItem:(id)arg0 wantsCloseUpView:(BOOL)arg1 ;
+(id)entryPointWithMapItem:(id)arg0 wantsCloseUpView:(BOOL)arg1 cameraFrameOverride:(id)arg2 ;
+(id)entryPointWithMapItem:(id)arg0 wantsCloseUpView:(BOOL)arg1 cameraFrameOverride:(id)arg2 triggerAction:(int)arg3 ;
+(id)entryPointWithMapItem:(id)arg0 wantsCloseUpView:(BOOL)arg1 triggerAction:(int)arg2 ;
+(id)entryPointWithMuninMarker:(id)arg0 heading:(CGFloat)arg1 ;
+(id)entryPointWithMuninViewState:(id)arg0 ;
+(id)entryPointWithMuninViewState:(id)arg0 triggerAction:(int)arg1 ;
+(id)entryPointWithScene:(id)arg0 wantsCloseUpView:(BOOL)arg1 ;
-(id)init;


@end


#endif