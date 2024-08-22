// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMPOSTERTILECONTROLLER_H
#define PXCMMPOSTERTILECONTROLLER_H

@class NSString, UIView;
@protocol PXChangeObserver, PXUIViewBasicTile, PXReusableObject;

#import <Foundation/Foundation.h>

#import "PXCMMViewModel.h"
#import "PXMomentShareStatusPresentation.h"
#import "PXCMMPosterHeaderView.h"

@interface PXCMMPosterTileController : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject>

 {
    NSUInteger _activityType;
    PXCMMViewModel *_viewModel;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    PXCMMPosterHeaderView *_posterHeaderView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


+(CGFloat)preferredHeightForWidth:(CGFloat)arg0 traitCollection:(id)arg1 screen:(id)arg2 ;
-(id)init;
-(id)initWithActivityType:(NSUInteger)arg0 viewModel:(id)arg1 momentShareStatusPresentation:(id)arg2 ;
-(void)_updateContent;
-(void)_updateStatusString;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;


@end


#endif