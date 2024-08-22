// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCCINFOMOSAICGRIDVIEW_H
#define HUCCINFOMOSAICGRIDVIEW_H

@class UIView, UILabel, UIImageView, NSArray, UIStackView;
@protocol HUProvidesMosaicFrames;


#import "HUCCFakeMosaicGridView.h"
#import "HUMosaicLayoutGeometry.h"

@interface HUCCInfoMosaicGridView : UIView

@property (retain, nonatomic) UILabel *actionLabel; // ivar: _actionLabel
@property (retain, nonatomic) HUCCFakeMosaicGridView *backgroundGridView; // ivar: _backgroundGridView
@property (weak, nonatomic) NSObject<HUProvidesMosaicFrames> *frameDelegate; // ivar: _frameDelegate
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) UILabel *infoLabel; // ivar: _infoLabel
@property (retain, nonatomic) NSArray *infoMosaicConstraints; // ivar: _infoMosaicConstraints
@property (retain, nonatomic) HUMosaicLayoutGeometry *mosaicLayoutGeometry;
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateConstraints;
-(void)_setupInfoMosaicView;
-(void)resetView;
-(void)updateConstraints;
-(void)updateUIWithInfoText:(id)arg0 andActionText:(id)arg1 ;


@end


#endif