// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVMULTIMOVEWITHFALLBACKTASKGROUP_H
#define COREDAVMULTIMOVEWITHFALLBACKTASKGROUP_H

@class NSMutableDictionary, NSURL, NSMutableSet, NSMutableArray, NSDictionary, NSSet;


#import "CoreDAVTaskGroup.h"

@interface CoreDAVMultiMoveWithFallbackTaskGroup : CoreDAVTaskGroup

@property (readonly, nonatomic) NSMutableDictionary *destinationEntityETags; // ivar: _destinationEntityETags
@property (readonly, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (readonly, nonatomic) NSMutableSet *destinationURLs; // ivar: _destinationURLs
@property (retain, nonatomic) NSMutableArray *outstandingSourceURLsToMove; // ivar: _outstandingSourceURLsToMove
@property (readonly, nonatomic) int overwrite; // ivar: _overwrite
@property (readonly, nonatomic) NSDictionary *sourceEntityDataContentTypes; // ivar: _sourceEntityDataContentTypes
@property (readonly, nonatomic) NSDictionary *sourceEntityDataPayloads; // ivar: _sourceEntityDataPayloads
@property (readonly, nonatomic) NSDictionary *sourceEntityETags; // ivar: _sourceEntityETags
@property (readonly, nonatomic) NSSet *sourceURLs; // ivar: _sourceURLs
@property (readonly, nonatomic) BOOL useFallback; // ivar: _useFallback


-(id)_eTagFromTaskResponseHeaders:(id)arg0 ;
-(id)description;
-(id)filenameFromURL:(id)arg0 ;
-(id)fullDestinationURLFromSourceURL:(id)arg0 ;
-(id)initWithSourceURLs:(id)arg0 destinationURL:(id)arg1 overwrite:(BOOL)arg2 useFallback:(BOOL)arg3 sourceEntityDataPayloads:(id)arg4 sourceEntityDataContentTypes:(id)arg5 sourceEntityETags:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 ;
-(void)_completedMoveTask:(id)arg0 sourceURL:(id)arg1 ;
-(void)_completedPutTask:(id)arg0 sourceURL:(id)arg1 ;
-(void)_setTagsForDestinationEntityAtURL:(id)arg0 fromTaskResponseHeaders:(id)arg1 completionBlock:(id)arg2 ;
-(void)processOutstandingTasks;
-(void)startTaskGroup;


@end


#endif