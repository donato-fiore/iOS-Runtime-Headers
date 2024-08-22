// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTAGSEARCHOPERATION_H
#define FCTAGSEARCHOPERATION_H

@class NSError, NSString;
@protocol FCContentContext;


#import "FCOperation.h"
#import "FCAssetManager.h"
#import "FCCKContentDatabase.h"
#import "FCStreamingResults.h"
#import "FCTagRecordSource.h"

@interface FCTagSearchOperation : FCOperation

@property (retain, nonatomic) FCAssetManager *assetManager; // ivar: _assetManager
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (retain, nonatomic) FCCKContentDatabase *contentDatabase; // ivar: _contentDatabase
@property (retain, nonatomic) NSError *searchError; // ivar: _searchError
@property (retain, nonatomic) FCStreamingResults *searchResults; // ivar: _searchResults
@property (copy) id *searchResultsBlock; // ivar: _searchResultsBlock
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (retain, nonatomic) FCTagRecordSource *tagRecordSource; // ivar: _tagRecordSource
@property (nonatomic) NSUInteger tagType; // ivar: _tagType


-(BOOL)validateOperation;
-(id)_establishStreamOfTags;
-(id)_localIdentifier;
-(void)_performSearchQuery:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif