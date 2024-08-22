// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKLOOKAROUNDSCENE_H
#define MKLOOKAROUNDSCENE_H

@class GEOCameraFrame, GEOMuninViewState;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKLookAroundScene : NSObject <NSCopying>



@property (readonly, nonatomic, getter=_cameraFrameOverride) GEOCameraFrame *cameraFrameOverride; // ivar: _cameraFrameOverride
@property (readonly, nonatomic, getter=_mapItem) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic, getter=_muninViewState) GEOMuninViewState *muninViewState; // ivar: _muninViewState
@property (readonly, nonatomic, getter=_type) NSUInteger type; // ivar: _type
@property (nonatomic, getter=_wantsCloseUpView, setter=_setWantsCloseUpView:) BOOL wantsCloseUpView; // ivar: _wantsCloseUpView


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 cameraFrameOverride:(id)arg1 ;
-(id)initWithMuninViewState:(id)arg0 ;


@end


#endif