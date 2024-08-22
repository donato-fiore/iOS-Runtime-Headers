// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCVV15FOCUSSETTINGSUI17AVAILABLEAPPSVIEW9SEARCHBAR11COORDINATOR_H
#define _TTCVV15FOCUSSETTINGSUI17AVAILABLEAPPSVIEW9SEARCHBAR11COORDINATOR_H

@protocol UISearchBarDelegate, UITextFieldDelegate;

#import <Foundation/Foundation.h>


@interface _TtCVV15FocusSettingsUI17AvailableAppsView9SearchBar11Coordinator : NSObject <UISearchBarDelegate, UITextFieldDelegate>

 {
    ? _text;
    ? _isSearching;
}




-(BOOL)textFieldShouldClear:(id)arg0 ;
-(id)init;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;


@end


#endif