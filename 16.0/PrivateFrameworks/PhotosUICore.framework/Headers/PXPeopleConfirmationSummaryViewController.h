// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLECONFIRMATIONSUMMARYVIEWCONTROLLER_H
#define PXPEOPLECONFIRMATIONSUMMARYVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, UILabel;
@protocol PXPeopleSummaryDelegate;



@interface PXPeopleConfirmationSummaryViewController : UIViewController

@property (weak) NSObject<PXPeopleSummaryDelegate> *delegate; // ivar: _delegate
@property (retain) NSLayoutConstraint *labelSpacingConstraint; // ivar: _labelSpacingConstraint
@property (retain) UILabel *summaryLabel; // ivar: _summaryLabel


-(id)initWithDelegate:(id)arg0 ;
-(void)_updateDynamicTypeSpacing;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif