// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMEDIAENTITYFETCHRESPONSECHANGESOPERATION_H
#define VUIMEDIAENTITYFETCHRESPONSECHANGESOPERATION_H

@class VUIAsynchronousOperation, NSArray, NSError;



@interface VUIMediaEntityFetchResponseChangesOperation : VUIAsynchronousOperation

@property (copy, nonatomic) NSArray *currentFetchResponses; // ivar: _currentFetchResponses
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSArray *fetchResponseChanges; // ivar: _fetchResponseChanges
@property (copy, nonatomic) NSArray *latestFetchResponses; // ivar: _latestFetchResponses


+(id)_changeSetFromCurrentMediaEntities:(id)arg0 toLatestMediaEntities:(id)arg1 ;
-(id)_groupingChangeSetWithCurrentGrouping:(id)arg0 latestGrouping:(id)arg1 ;
-(id)_groupingChangeSetWithLatestFetchResponse:(id)arg0 currentFetchResponse:(id)arg1 ;
-(id)_mediaEntitiesChangeSetWithLatestFetchResponse:(id)arg0 currentFetchResponse:(id)arg1 ;
-(id)init;
-(id)initWithLatestFetchResponses:(id)arg0 currentFetchResponses:(id)arg1 ;
-(void)_preloadMediaEntityMetadata;
-(void)_preloadMetadataForFetchResponse:(id)arg0 ;
-(void)executionDidBegin;


@end


#endif