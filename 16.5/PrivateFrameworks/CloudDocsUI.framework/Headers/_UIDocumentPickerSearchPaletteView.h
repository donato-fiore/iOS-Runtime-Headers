// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDOCUMENTPICKERSEARCHPALETTEVIEW_H
#define _UIDOCUMENTPICKERSEARCHPALETTEVIEW_H

@class UIView, NSString, UISearchController, NSLayoutConstraint;
@protocol UISearchBarDelegate;


#import "_UIDocumentSearchListController.h"

@interface _UIDocumentPickerSearchPaletteView : UIView <UISearchBarDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIDocumentSearchListController *resultsController; // ivar: _resultsController
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (retain, nonatomic) NSLayoutConstraint *searchFieldLeftConstraint; // ivar: _searchFieldLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *searchFieldRightConstraint; // ivar: _searchFieldRightConstraint
@property (readonly) Class superclass;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 resultsController:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchCanceled:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif