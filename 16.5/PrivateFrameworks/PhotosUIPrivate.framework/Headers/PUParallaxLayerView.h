// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPARALLAXLAYERVIEW_H
#define PUPARALLAXLAYERVIEW_H

@class UIView, PFParallaxLayer, CALayer;


#import "PUParallaxLayerLayoutInfo.h"

@interface PUParallaxLayerView : UIView

@property (retain, nonatomic) UIView *backfillMaskView; // ivar: _backfillMaskView
@property (nonatomic) BOOL backfillMaskingEnabled; // ivar: _backfillMaskingEnabled
@property (retain, nonatomic) PFParallaxLayer *backfillParallaxLayer; // ivar: _backfillParallaxLayer
@property (retain, nonatomic) UIView *backfillView; // ivar: _backfillView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) PUParallaxLayerLayoutInfo *currentLayoutInfo; // ivar: _currentLayoutInfo
@property (readonly, nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (readonly, nonatomic) CALayer *maskLayer; // ivar: _maskLayer
@property (retain, nonatomic) PFParallaxLayer *parallaxLayer; // ivar: _parallaxLayer


-(id)initWithParallaxLayer:(id)arg0 isEditing:(BOOL)arg1 ;
-(void)_layoutWithCurrentLayoutInfo;
-(void)_updateParallaxBackfillLayerProperties;
-(void)_updateParallaxBackfillMaskingProperties;
-(void)_updateParallaxLayerProperties;
-(void)layoutWithInfo:(id)arg0 ;


@end


#endif