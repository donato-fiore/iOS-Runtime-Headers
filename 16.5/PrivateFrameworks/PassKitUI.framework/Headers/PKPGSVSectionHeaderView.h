// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPGSVSECTIONHEADERVIEW_H
#define PKPGSVSECTIONHEADERVIEW_H

@class UIView, UILabel, UIButton, UIActivityIndicatorView, NSString;
@protocol PKPGSVSectionHeaderView, PKPGSVSectionHeaderViewDelegate;


#import "PKButtonBadgeView.h"

@interface PKPGSVSectionHeaderView : UIView <PKPGSVSectionHeaderView>

 {
    BOOL _sizesDirty;
    UILabel *_titleView;
    UILabel *_environmentLabel;
    UIButton *_actionButton;
    UIButton *_inboxButton;
    PKButtonBadgeView *_inboxBadge;
    UIButton *_orderManagementButton;
    UIActivityIndicatorView *_activityIndicator;
    UIEdgeInsets _margins;
    id<PKPGSVSectionHeaderViewDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger passType; // ivar: _passType
@property (nonatomic) BOOL showActivityIndicator; // ivar: _showActivityIndicator
@property (readonly) Class superclass;


-(BOOL)_shouldShowInboxButton;
-(BOOL)needsRemoval;
-(id)_inboxBadgeValue;
-(id)init;
-(id)initWithPassType:(NSUInteger)arg0 state:(struct ? )arg1 delegate:(id)arg2 ;
-(id)leadingView;
-(id)trailingView;
-(void)_addTapped;
-(void)_inboxTapped;
-(void)_showOrderManagement;
-(void)addTapped;
-(void)inboxTapped;
-(void)layoutSubviews;
-(void)setSectionsState:(struct ? )arg0 ;
-(void)showOrderManagement;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif