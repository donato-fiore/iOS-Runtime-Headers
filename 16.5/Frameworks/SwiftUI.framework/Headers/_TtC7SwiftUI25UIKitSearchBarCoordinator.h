// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SWIFTUI25UIKITSEARCHBARCOORDINATOR_H
#define _TTC7SWIFTUI25UIKITSEARCHBARCOORDINATOR_H

@class TtC7SwiftUI23PlatformViewCoordinator;
@protocol UISearchBarDelegate;



@interface _TtC7SwiftUI25UIKitSearchBarCoordinator : TtC7SwiftUI23PlatformViewCoordinator <UISearchBarDelegate>

 {
    ? triggerSubmission;
    ? configuration;
    ? scopes;
    ? placement;
    ? delegate;
    ? isViewUpdating;
    ? oldText;
    ? oldTokens;
}




-(id)init;
-(void)primaryActionTriggered:(id)arg0 ;
-(void)searchBar:(id)arg0 selectedScopeButtonIndexDidChange:(NSInteger)arg1 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;


@end


#endif