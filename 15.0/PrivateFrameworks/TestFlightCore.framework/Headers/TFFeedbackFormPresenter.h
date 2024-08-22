// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFFEEDBACKFORMPRESENTER_H
#define TFFEEDBACKFORMPRESENTER_H

@class NSString;
@protocol TFFeedbackDataContainerObserver, TFFeedbackDataUpdateProxy, TFFeedbackDataSource, TFFeedbackFormPresenterView;

#import <Foundation/Foundation.h>

#import "TFFeedbackDataContainer.h"
#import "TFFeedbackForm.h"
#import "TFFeedbackSession.h"

@interface TFFeedbackFormPresenter : NSObject <TFFeedbackDataContainerObserver, TFFeedbackDataUpdateProxy>



@property (readonly, nonatomic) TFFeedbackDataContainer *dataContainer; // ivar: _dataContainer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<TFFeedbackDataSource> *feedbackDataSource;
@property (readonly, nonatomic) TFFeedbackForm *form; // ivar: _form
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<TFFeedbackFormPresenterView> *presenterView; // ivar: _presenterView
@property (readonly, nonatomic) TFFeedbackSession *session; // ivar: _session
@property (readonly) Class superclass;


-(NSUInteger)numberOfEntryGroupsInForm;
-(NSUInteger)numberOfVisibleItemsInGroupAtIndex:(NSInteger)arg0 ;
-(id)_indexPathsOfVisibleEntriesWithIdentifiers:(id)arg0 ;
-(id)_indicesOfGroupsWithIdentifiers:(id)arg0 ;
-(id)footerTextForGroupAtIndex:(NSInteger)arg0 ;
-(id)footerTextLinkMapForGroupAtIndex:(NSInteger)arg0 ;
-(id)headerTextForGroupAtIndex:(NSInteger)arg0 ;
-(id)headerTextLinkMapForGroupAtIndex:(NSInteger)arg0 ;
-(id)initWithForm:(id)arg0 dataContainer:(id)arg1 session:(id)arg2 ;
-(id)visibleEntryAtGroupIndex:(NSInteger)arg0 entryIndex:(NSInteger)arg1 ;
-(void)didUpdateEntry:(id)arg0 toGroupInclusionBool:(BOOL)arg1 ;
-(void)didUpdateEntry:(id)arg0 toString:(id)arg1 editInProgress:(BOOL)arg2 ;
-(void)feedbackDataContainer:(id)arg0 didUpdateValuesForGroupIdentifiers:(id)arg1 entryIdentifiers:(id)arg2 ;
-(void)prepareViewForForm;
-(void)presenterViewDidCancelFeedbackSubmission:(id)arg0 ;
-(void)presenterViewDidInitiateFeedbackSubmission:(id)arg0 ;
-(void)showSubmissionFailureWithMessage:(id)arg0 ;


@end


#endif