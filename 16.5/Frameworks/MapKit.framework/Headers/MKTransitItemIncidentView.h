// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKTRANSITITEMINCIDENTVIEW_H
#define MKTRANSITITEMINCIDENTVIEW_H

@class UIView, UIImageView, NSArray, NSLayoutConstraint, NSString;
@protocol MKTransitItemIncidentView;


#import "_MKUILabel.h"
#import "MKTransitIncidentItemCellBackgroundView.h"

@interface MKTransitItemIncidentView : UIView <MKTransitItemIncidentView>

 {
    UIImageView *_incidentIconImageView;
    BOOL _needsConstraintsRebuild;
    NSArray *_constraints;
    _MKUILabel *_titleLabel;
    _MKUILabel *_lastUpdatedLabel;
    MKTransitIncidentItemCellBackgroundView *_backgroundView;
    BOOL _incidentIsBlocking;
    BOOL _useCondensedWidthLayout;
    NSLayoutConstraint *_titleLabelToTopConstraint;
    NSLayoutConstraint *_bottomToLabelConstraint;
    NSLayoutConstraint *_titleToLastUpdatedLabelConstraint;
    NSLayoutConstraint *_bottomToBackgroundConstraint;
    CGFloat _bottomToBackgroundOffset;
}


@property (nonatomic) NSInteger cellPosition;
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL padBottom; // ivar: _padBottom
@property (readonly) Class superclass;


-(id)_blockingImage;
-(id)_nonBlockingImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureWithMessage:(id)arg0 referenceDate:(id)arg1 lastUpdated:(id)arg2 incidentIsBlocking:(BOOL)arg3 shouldShowImage:(BOOL)arg4 inSiri:(BOOL)arg5 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateBottomConstraintWithOffset:(CGFloat)arg0 ;
-(void)_updateConstraintValues;
-(void)configureViews;
-(void)configureWithIncident:(id)arg0 referenceDate:(id)arg1 shouldShowImage:(BOOL)arg2 inSiri:(BOOL)arg3 ;
-(void)configureWithIncidentMessage:(id)arg0 referenceDate:(id)arg1 shouldShowImage:(BOOL)arg2 inSiri:(BOOL)arg3 ;
-(void)configureWithMessage:(id)arg0 incident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)infoCardThemeChanged;
-(void)rebuildConstraints;
-(void)updateConstraints;


@end


#endif