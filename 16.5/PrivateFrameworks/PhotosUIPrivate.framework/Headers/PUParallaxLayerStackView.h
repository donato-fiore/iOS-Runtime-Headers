// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPARALLAXLAYERSTACKVIEW_H
#define PUPARALLAXLAYERSTACKVIEW_H

@class UIView, NSString;
@protocol PXChangeObserver;


#import "PUParallaxLayerStackViewModel.h"

@interface PUParallaxLayerStackView : UIView <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint motionVector; // ivar: _motionVector
@property (readonly) Class superclass;
@property (retain, nonatomic) PUParallaxLayerStackViewModel *viewModel; // ivar: _viewModel


-(void)_updateContainerFrame;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateLayerViewContents;


@end


#endif