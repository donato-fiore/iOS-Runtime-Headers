// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFCONTACTSSEARCHRESULTSMODEL_H
#define MFCONTACTSSEARCHRESULTSMODEL_H

@class NSOperationQueue, NSArray, NSMutableDictionary, NSString;
@protocol _MFSearchResultsConsumer;

#import <Foundation/Foundation.h>


@interface MFContactsSearchResultsModel : NSObject <_MFSearchResultsConsumer>

 {
    NSOperationQueue *_queue;
    NSArray *_recentSearchResults;
    NSArray *_infrequentRecentSearchResults;
    NSMutableDictionary *_localSearchResultsByAddress;
    NSMutableDictionary *_serverSearchResultsByAddress;
    NSMutableDictionary *_recentRecipientsByAddress;
    *__CFArray _resultTypesSortOrder;
    *__CFArray _resultTypesPriorityOrder;
    *__CFSet _finishedResultTypes;
    NSUInteger _preferredType;
    BOOL _favorMobileNumbers;
    int _resetCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *enteredRecipients; // ivar: _enteredRecipients
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_didFinishSearchForType:(NSUInteger)arg0 ;
-(BOOL)_isResetting;
-(BOOL)_shouldProcessResultsAfterFinishingType:(NSUInteger)arg0 ;
-(id)_bestRecipientForAddress:(id)arg0 fallback:(id)arg1 ;
-(id)_dictionaryForResultType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithFavorMobileNumbers:(BOOL)arg0 ;
-(id)initWithResultTypeSortOrderComparator:(*unk)arg0 resultTypePriorityComparator:(*unk)arg1 favorMobileNumbers:(BOOL)arg2 ;
-(void)_addBestRecipientsForRecipients:(id)arg0 excluding:(id)arg1 toArray:(id)arg2 ;
-(void)_addResults:(id)arg0 ofType:(NSUInteger)arg1 ;
-(void)_appendSortedResultsOfType:(NSUInteger)arg0 excluding:(id)arg1 toResults:(id)arg2 ;
-(void)_enumerateSearchResultTypesInSortOrderUsingBlock:(id)arg0 ;
-(void)_finishSearchOfType:(NSUInteger)arg0 ;
-(void)addResults:(id)arg0 ofType:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)processAddedResultsOfType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)reset;


@end


#endif