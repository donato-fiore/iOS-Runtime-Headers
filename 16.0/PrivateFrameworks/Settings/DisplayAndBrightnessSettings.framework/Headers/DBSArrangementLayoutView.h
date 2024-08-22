// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSARRANGEMENTLAYOUTVIEW_H
#define DBSARRANGEMENTLAYOUTVIEW_H

@class UIView, NSLayoutConstraint;


#import "DBSArrangementLayoutViewController.h"
#import "DBSNativeDisplayIconView.h"
#import "DBSExternalDisplayIconView.h"

@interface DBSArrangementLayoutView : UIView

@property (weak, nonatomic) DBSArrangementLayoutViewController *dataSource; // ivar: _dataSource
@property (retain, nonatomic) DBSNativeDisplayIconView *eastDisplay; // ivar: _eastDisplay
@property (retain, nonatomic) DBSExternalDisplayIconView *externalDisplay; // ivar: _externalDisplay
@property (nonatomic) CGFloat margin; // ivar: _margin
@property (retain, nonatomic) NSLayoutConstraint *nativeIconAspectRatioConstraint; // ivar: _nativeIconAspectRatioConstraint
@property (retain, nonatomic) DBSNativeDisplayIconView *northDisplay; // ivar: _northDisplay
@property (retain, nonatomic) DBSNativeDisplayIconView *southDisplay; // ivar: _southDisplay
@property (retain, nonatomic) DBSNativeDisplayIconView *westDisplay; // ivar: _westDisplay
@property (retain, nonatomic) NSLayoutConstraint *widthRatioConstraint; // ivar: _widthRatioConstraint


-(CGFloat)_pointDistanceFirst:(struct CGPoint )arg0 second:(struct CGPoint )arg1 ;
-(NSUInteger)displayLocationForPointInView:(struct CGPoint )arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(struct CGSize )_nativeDisplaySizeForOrientation:(NSInteger)arg0 ;
-(void)arrangeDisplayIcons;
-(void)placeCurrentDisplayAtLocation:(NSUInteger)arg0 ;
-(void)updateForOrientation:(NSInteger)arg0 ;


@end


#endif