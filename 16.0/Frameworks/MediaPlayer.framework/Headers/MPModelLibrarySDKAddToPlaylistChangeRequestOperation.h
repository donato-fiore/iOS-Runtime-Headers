// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELLIBRARYSDKADDTOPLAYLISTCHANGEREQUESTOPERATION_H
#define MPMODELLIBRARYSDKADDTOPLAYLISTCHANGEREQUESTOPERATION_H



#import "MPAsyncOperation.h"
#import "MPModelLibrarySDKAddToPlaylistChangeRequest.h"

@interface MPModelLibrarySDKAddToPlaylistChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPModelLibrarySDKAddToPlaylistChangeRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(void)execute;


@end


#endif