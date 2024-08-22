// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SEARCHBARCONTENT_H
#define _SEARCHBARCONTENT_H

@class UIStackView, NSString;
@protocol UISearchBarDelegate, HKIncrementalSearchBarDelegate;


#import "HKBarButtonItemControl.h"
#import "HKIncrementalSearchBar.h"
#import "_SearchEntryWithMatchDisplay.h"

@interface _SearchBarContent : UIStackView <UISearchBarDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKBarButtonItemControl *doneBarButton; // ivar: _doneBarButton
@property (readonly, nonatomic) HKBarButtonItemControl *downBarButton; // ivar: _downBarButton
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HKIncrementalSearchBar *searchBar; // ivar: _searchBar
@property (weak, nonatomic) NSObject<HKIncrementalSearchBarDelegate> *searchBarDelegate; // ivar: _searchBarDelegate
@property (readonly, nonatomic) _SearchEntryWithMatchDisplay *searchEntry; // ivar: _searchEntry
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKBarButtonItemControl *upBarButton; // ivar: _upBarButton


-(id)initWithSearchBar:(id)arg0 ;
-(id)inputField;
-(void)buildSearchBarContent;
-(void)downAction:(id)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)upAction:(id)arg0 ;


@end


#endif