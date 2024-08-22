// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILCOMPOSECONTACTSSEARCHCONTROLLER_H
#define MFMAILCOMPOSECONTACTSSEARCHCONTROLLER_H

@class CNAutocompleteSearchManager, NSMutableArray, NSNumber, NSString;
@protocol CNAutocompleteSearchConsumer, MFMailComposeContactsSearchControllerDelegate;

#import <Foundation/Foundation.h>


@interface MFMailComposeContactsSearchController : NSObject <CNAutocompleteSearchConsumer>

 {
    CNAutocompleteSearchManager *_manager;
    NSMutableArray *_autocompleteSearchResults;
    NSMutableArray *_corecipientSearchResults;
    NSNumber *_corecipientSearchTaskID;
    BOOL _foundAnySearchResults;
    NSUInteger _waitingOnSearchResultsCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFMailComposeContactsSearchControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *taskID; // ivar: _taskID


-(id)init;
-(void)_cancelSearchAndNotify:(BOOL)arg0 ;
-(void)_finishSearch;
-(void)_reset;
-(void)beganNetworkActivity;
-(void)cancelSearch;
-(void)consumeAutocompleteSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)consumeCorecipientSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)didSelectRecipient:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)endedNetworkActivity;
-(void)findCorecipientsWithRecipients:(id)arg0 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)finishedSearchingForCorecipients;
-(void)finishedTaskWithID:(id)arg0 ;
-(void)removeRecipient:(id)arg0 ;
-(void)searchWithString:(id)arg0 ;
-(void)searchWithString:(id)arg0 enteredRecipients:(id)arg1 title:(id)arg2 ;


@end


#endif