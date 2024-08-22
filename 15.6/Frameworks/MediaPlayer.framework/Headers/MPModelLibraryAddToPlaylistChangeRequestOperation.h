// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELLIBRARYADDTOPLAYLISTCHANGEREQUESTOPERATION_H
#define MPMODELLIBRARYADDTOPLAYLISTCHANGEREQUESTOPERATION_H

@class NSOperationQueue;


#import "MPAsyncOperation.h"
#import "MPModelLibraryAddToPlaylistChangeRequest.h"

@interface MPModelLibraryAddToPlaylistChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}


@property (copy, nonatomic) MPModelLibraryAddToPlaylistChangeRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(BOOL)_isCloudLibraryEnabled;
-(void)_updateCloudLibraryForPlaylist:(id)arg0 ;
-(void)execute;


@end


#endif