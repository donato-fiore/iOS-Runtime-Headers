// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABSERVERSEARCHPREDICATE_H
#define ABSERVERSEARCHPREDICATE_H

@class DADConnection, DAContactsSearchQuery, NSMutableArray, NSConditionLock, NSString;
@protocol DASearchQueryConsumer, ABPredicateDelegate;


#import "ABPredicate.h"

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer>

 {
    *void _source;
    DADConnection *_connection;
    DAContactsSearchQuery *_searchQuery;
    NSMutableArray *_searchResults;
    NSConditionLock *_doneLock;
    int _error;
}


@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) DADConnection *connection;
@property (nonatomic) NSObject<ABPredicateDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) int error;
@property (nonatomic) BOOL includePhotosInResults; // ivar: _includePhotosInResults
@property (nonatomic) BOOL includeSourceInResults; // ivar: _includeSourceInResults
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (nonatomic) *void source;


-(id)initWithSearchString:(id)arg0 source:(*void)arg1 account:(id)arg2 ;
-(id)initWithSearchString:(id)arg0 source:(*void)arg1 account:(id)arg2 includeSourceInResults:(BOOL)arg3 ;
-(id)initWithSearchString:(id)arg0 source:(*void)arg1 account:(id)arg2 includeSourceInResults:(BOOL)arg3 includePhotosInResults:(BOOL)arg4 ;
-(id)querySerializationIdentifier;
-(int)_errorForDAStatusCode:(NSInteger)arg0 ;
-(void)_searchQueryIsDone;
-(void)ab_runPredicateWithSortOrder:(unsigned int)arg0 ranked:(BOOL)arg1 inAddressBook:(*void)arg2 withDelegate:(id)arg3 ;
-(void)dealloc;
-(void)runPredicate;
-(void)runPredicateWithDelegate:(id)arg0 ;
-(void)searchQuery:(id)arg0 finishedWithError:(id)arg1 ;
-(void)searchQuery:(id)arg0 returnedResults:(id)arg1 ;


@end


#endif