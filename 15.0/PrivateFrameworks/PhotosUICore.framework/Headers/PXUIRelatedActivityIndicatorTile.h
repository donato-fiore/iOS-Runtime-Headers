// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUIRELATEDACTIVITYINDICATORTILE_H
#define PXUIRELATEDACTIVITYINDICATORTILE_H

@class UIActivityIndicatorView, UILabel, NSString;
@protocol PXChangeObserver;


#import "PXUIRelatedPlaceholderTile.h"
#import "PXPhotoAnalysisStatusController.h"

@interface PXUIRelatedActivityIndicatorTile : PXUIRelatedPlaceholderTile <PXChangeObserver>



@property (readonly, nonatomic) UIActivityIndicatorView *_activityIndicatorView; // ivar: __activityIndicatorView
@property (readonly, nonatomic) UILabel *_label; // ivar: __label
@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXPhotoAnalysisStatusController *statusController; // ivar: _statusController
@property (readonly) Class superclass;


-(id)init;
-(void)_updateLabelText;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif