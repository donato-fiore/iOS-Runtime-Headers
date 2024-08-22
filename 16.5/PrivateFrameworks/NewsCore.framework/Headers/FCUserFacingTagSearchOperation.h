// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCUSERFACINGTAGSEARCHOPERATION_H
#define FCUSERFACINGTAGSEARCHOPERATION_H

@class NSString;
@protocol FCContentContext;


#import "FCOperation.h"
#import "FCStreamingResults.h"

@interface FCUserFacingTagSearchOperation : FCOperation

@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (retain, nonatomic) FCStreamingResults *channelSearchResults; // ivar: _channelSearchResults
@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (copy, nonatomic) id *searchResultsBlock; // ivar: _searchResultsBlock
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (retain, nonatomic) FCStreamingResults *topicSearchResults; // ivar: _topicSearchResults
@property (nonatomic) NSUInteger userFacingTagOptions; // ivar: _userFacingTagOptions


-(BOOL)validateOperation;
-(id)_fetchResultsForTagType:(NSUInteger)arg0 batchSize:(NSUInteger)arg1 ;
-(id)_fetchResultsForUserFacingTopicsWithInitialChannels:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif