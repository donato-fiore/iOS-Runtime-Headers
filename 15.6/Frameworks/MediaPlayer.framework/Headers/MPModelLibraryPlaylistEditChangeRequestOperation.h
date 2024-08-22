// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELLIBRARYPLAYLISTEDITCHANGEREQUESTOPERATION_H
#define MPMODELLIBRARYPLAYLISTEDITCHANGEREQUESTOPERATION_H



#import "MPAsyncOperation.h"
#import "MPModelLibraryPlaylistEditChangeRequest.h"

@interface MPModelLibraryPlaylistEditChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) id *completeResponseHandler; // ivar: _completeResponseHandler
@property (copy, nonatomic) id *localPersistenceResponseHandler; // ivar: _localPersistenceResponseHandler
@property (copy, nonatomic) MPModelLibraryPlaylistEditChangeRequest *request; // ivar: _request


+(id)requiredPlaylistEntryProperties;
-(BOOL)_isCloudLibraryEnabled;
-(void)execute;


@end


#endif