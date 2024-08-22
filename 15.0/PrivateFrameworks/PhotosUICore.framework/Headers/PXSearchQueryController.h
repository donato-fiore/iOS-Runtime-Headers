// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHQUERYCONTROLLER_H
#define PXSEARCHQUERYCONTROLLER_H

@class NSString, PSIDatabase;
@protocol PXSearchQueryControllerProtocol;

#import <Foundation/Foundation.h>

#import "PXSearchQuery.h"
#import "PXSearchIndexManager.h"
#import "PXSearchQueryExecutor.h"

@interface PXSearchQueryController : NSObject <PXSearchQueryControllerProtocol>



@property (retain, nonatomic) PXSearchQuery *currentSearchQuery; // ivar: _currentSearchQuery
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isOpeningSearchIndex; // ivar: _isOpeningSearchIndex
@property (readonly, nonatomic) BOOL requestSceneAncestryInformation; // ivar: _requestSceneAncestryInformation
@property (readonly, nonatomic) id *resultsHandler; // ivar: _resultsHandler
@property (retain, nonatomic) PSIDatabase *searchIndex; // ivar: _searchIndex
@property (readonly, nonatomic) PXSearchIndexManager *searchIndexManager; // ivar: _searchIndexManager
@property (retain, nonatomic) PXSearchQueryExecutor *searchQueryExecutor; // ivar: _searchQueryExecutor
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSearchIndexManager:(id)arg0 requestSceneAncestryInformation:(BOOL)arg1 resultsHandler:(id)arg2 ;
-(void)_openSearchIndex;
-(void)_performSearch:(id)arg0 retry:(BOOL)arg1 ;
-(void)performSearch:(id)arg0 ;


@end


#endif