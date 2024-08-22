// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFHIGHLIGHTCONTACTLIST_H
#define SFHIGHLIGHTCONTACTLIST_H

@class UIView, UILabel, NSLayoutConstraint, UIStackView, NSArray, NSString;
@protocol SFHighlightContactListCellDelegate;


#import "SFHighlightContactListButton.h"

@interface SFHighlightContactList : UIView <SFHighlightContactListCellDelegate>

 {
    UILabel *_headerLabel;
    SFHighlightContactListButton *_manageButton;
    NSLayoutConstraint *_manageButtonTopConstraintForEmptyList;
    NSLayoutConstraint *_manageButtonTopConstraintForNonEmptyList;
    UIStackView *_stackView;
    BOOL _needsResizeAfterLayout;
}


@property (copy, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *infoViewControllerHandler; // ivar: _infoViewControllerHandler
@property (copy, nonatomic) id *manageHandler; // ivar: _manageHandler
@property (copy, nonatomic) id *resizeHandler; // ivar: _resizeHandler
@property (copy, nonatomic) id *rowTapHandler; // ivar: _rowTapHandler
@property (readonly) Class superclass;


-(id)initWithContacts:(id)arg0 ;
-(void)_didTapManage:(id)arg0 ;
-(void)_updateList;
-(void)cellDidReceiveTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif