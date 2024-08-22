// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEPARENTINFOVIEWCONTROLLER_H
#define MKPLACEPARENTINFOVIEWCONTROLLER_H

@class UILabel, UIButton, UIStackView, NSLayoutConstraint, NSString;
@protocol MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate, MKStackingViewControllerFixedHeightAware, _MKInfoCardAnalyticsDelegate, MKPlaceParentInfoViewControllerDelegate;


#import "MKPlaceSectionViewController.h"
#import "MKPlaceSectionRowView.h"
#import "MKMapItem.h"

@interface MKPlaceParentInfoViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate, MKStackingViewControllerFixedHeightAware>

 {
    MKPlaceSectionRowView *_sectionRow;
    UILabel *_titleLabel;
    UIButton *_nameButton;
    UIStackView *_stackView;
}


@property (weak, nonatomic) NSObject<_MKInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (retain, nonatomic) NSLayoutConstraint *baselineToBottomConstraint; // ivar: _baselineToBottomConstraint
@property (retain, nonatomic) MKMapItem *childMapItem; // ivar: _childMapItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKPlaceParentInfoViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *parentMapItem; // ivar: _parentMapItem
@property (nonatomic) BOOL resizableViewsDisabled; // ivar: _resizableViewsDisabled
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topToBaselineConstraint; // ivar: _topToBaselineConstraint


+(id)parentInfoWithPlaceItem:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(id)font;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithChild:(id)arg0 ;
-(id)parentIdentifiers;
-(id)venueTitleForMapItem:(id)arg0 ;
-(void)_buttonTapped:(id)arg0 ;
-(void)_contentSizeDidChange;
-(void)_updateFont;
-(void)fetchParentItem;
-(void)infoCardThemeChanged;
-(void)setupData;
-(void)showData;
-(void)updateLabelsColor;
-(void)viewDidLoad;


@end


#endif