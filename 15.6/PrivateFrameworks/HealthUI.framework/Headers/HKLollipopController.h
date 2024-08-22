// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKLOLLIPOPCONTROLLER_H
#define HKLOLLIPOPCONTROLLER_H

@class NSMutableArray, UIView, NSDate, NSArray;
@protocol HKLollipopDelegate;

#import <Foundation/Foundation.h>

#import "HKInteractiveChartAnnotationView.h"

@interface HKLollipopController : NSObject

@property (readonly, nonatomic) HKInteractiveChartAnnotationView *annotationView; // ivar: _annotationView
@property (nonatomic) BOOL centerLollipopVertically; // ivar: _centerLollipopVertically
@property (readonly, weak, nonatomic) NSObject<HKLollipopDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *extensionViews; // ivar: _extensionViews
@property (retain, nonatomic) UIView *fieldView; // ivar: _fieldView
@property (nonatomic) CGFloat lastDismissTime; // ivar: _lastDismissTime
@property (retain, nonatomic) NSDate *lastFirstLollipopDate; // ivar: _lastFirstLollipopDate
@property (copy, nonatomic) NSArray *lastSelectionLocation; // ivar: _lastSelectionLocation
@property (nonatomic) BOOL noAnimationVisibility; // ivar: _noAnimationVisibility
@property (retain, nonatomic) UIView *parentView; // ivar: _parentView


+(BOOL)pointSelectionContextsHaveUserInfo:(id)arg0 ;
-(BOOL)_selectionHasMoved:(id)arg0 ;
-(BOOL)isVisible;
-(CGFloat)_lollipopExtensionLength;
-(CGFloat)_lollipopExtensionWidth;
-(id)_lollipopAnnotationColor;
-(id)_lollipopExtensionColor;
-(id)_lollipopFieldColor;
-(id)_stickLocationsFromPointContexts:(id)arg0 ;
-(id)firstLollipopDateSinceDelta:(CGFloat)arg0 ;
-(id)initWithAnnotationDataSource:(id)arg0 parentView:(id)arg1 delegate:(id)arg2 ;
-(void)_bringViewsToFront;
-(void)_positionAnnotationViewWithStickLocations:(id)arg0 ;
-(void)_rebuildExtensionsWithStickLocations:(id)arg0 ;
-(void)_setAlpha:(CGFloat)arg0 ;
-(void)_setExtensionViewBackgrounds;
-(void)_setHidden:(BOOL)arg0 ;
-(void)setInvisibleAnimated:(BOOL)arg0 ;
-(void)setVisibleWithRect:(struct CGRect )arg0 pointContexts:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateWithPointContexts:(id)arg0 ;


@end


#endif