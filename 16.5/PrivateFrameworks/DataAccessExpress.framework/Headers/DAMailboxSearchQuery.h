// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAMAILBOXSEARCHQUERY_H
#define DAMAILBOXSEARCHQUERY_H

@class NSString, NSDate;


#import "DASearchQuery.h"

@interface DAMailboxSearchQuery : DASearchQuery

@property (nonatomic) int MIMESupport; // ivar: _MIMESupport
@property (nonatomic) BOOL allOrNone; // ivar: _allOrNone
@property (nonatomic) int bodyType; // ivar: _bodyType
@property (retain, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (nonatomic) BOOL deepTraversal; // ivar: _deepTraversal
@property (retain, nonatomic) NSDate *priorToDate; // ivar: _priorToDate
@property (nonatomic) BOOL rebuildResults; // ivar: _rebuildResults
@property (nonatomic) NSInteger truncationSize; // ivar: _truncationSize


+(id)mailboxSearchQueryWithSearchString:(id)arg0 consumer:(id)arg1 ;
+(id)mailboxSearchQueryWithSearchString:(id)arg0 predicate:(id)arg1 consumer:(id)arg2 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 consumer:(id)arg1 ;
-(id)initWithSearchString:(id)arg0 consumer:(id)arg1 ;
-(id)initWithSearchString:(id)arg0 predicate:(id)arg1 consumer:(id)arg2 ;


@end


#endif