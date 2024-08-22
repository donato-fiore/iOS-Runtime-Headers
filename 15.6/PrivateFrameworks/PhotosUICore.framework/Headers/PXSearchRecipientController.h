// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHRECIPIENTCONTROLLER_H
#define PXSEARCHRECIPIENTCONTROLLER_H

@class CNContactViewController, CNAutocompleteResultsTableViewController, NSString, UIView, CNComposeRecipient;
@protocol CNAutocompleteResultsTableViewControllerDelegate, PXSectionedDataSourceManagerObserver, PXSearchRecipientControllerDelegate;

#import <Foundation/Foundation.h>

#import "PXRecipientSearchDataSource.h"
#import "PXRecipientSearchDataSourceManager.h"

@interface PXSearchRecipientController : NSObject <CNAutocompleteResultsTableViewControllerDelegate, PXSectionedDataSourceManagerObserver>

 {
    ? _delegateRespondsTo;
}


@property (weak, nonatomic) CNContactViewController *_contactViewController; // ivar: __contactViewController
@property (retain, nonatomic, setter=_setSearchDataSource:) PXRecipientSearchDataSource *_searchDataSource; // ivar: __searchDataSource
@property (readonly, nonatomic) BOOL _searchHasNoResultsFound;
@property (readonly, nonatomic) CNAutocompleteResultsTableViewController *_searchResultsTableViewController; // ivar: __searchResultsTableViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSearchRecipientControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfSearchRecipients; // ivar: _numberOfSearchRecipients
@property (readonly, nonatomic) PXRecipientSearchDataSourceManager *searchDataSourceManager; // ivar: _searchDataSourceManager
@property (readonly, nonatomic) UIView *searchResultsView;
@property (nonatomic) NSInteger searchState; // ivar: _searchState
@property (retain, nonatomic) CNComposeRecipient *suggestedRecipientBeingViewed; // ivar: _suggestedRecipientBeingViewed
@property (readonly) Class superclass;


-(id)_contactViewControllerForRecipient:(id)arg0 ;
-(id)_validationTextColorForSearchResult:(id)arg0 ;
-(id)init;
-(void)_removeRecent;
-(void)autocompleteResultsController:(id)arg0 didRequestInfoAboutRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didSelectRecipient:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)autocompleteResultsController:(id)arg0 tintColorForRecipient:(id)arg1 completion:(id)arg2 ;
-(void)disambiguateRecipient:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif