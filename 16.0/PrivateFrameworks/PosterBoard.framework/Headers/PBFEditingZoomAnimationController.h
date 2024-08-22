// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFEDITINGZOOMANIMATIONCONTROLLER_H
#define PBFEDITINGZOOMANIMATIONCONTROLLER_H

@class UIView, UIImage;

#import <Foundation/Foundation.h>


@interface PBFEditingZoomAnimationController : NSObject

@property (readonly, nonatomic) UIView *complicationsView; // ivar: _complicationsView
@property (readonly, nonatomic) CGFloat previewCornerRadius; // ivar: _previewCornerRadius
@property (readonly, nonatomic) CGRect previewFrame; // ivar: _previewFrame
@property (readonly, nonatomic) UIImage *previewImage; // ivar: _previewImage


-(id)buildDimmingView;
-(id)buildZoomingViewWithPreviewImage:(id)arg0 previewFrame:(struct CGRect )arg1 editingView:(id)arg2 complicationsView:(id)arg3 ;
-(id)initWithPreviewFrame:(struct CGRect )arg0 previewCornerRadius:(CGFloat)arg1 previewImage:(id)arg2 complicationsView:(id)arg3 ;


@end


#endif