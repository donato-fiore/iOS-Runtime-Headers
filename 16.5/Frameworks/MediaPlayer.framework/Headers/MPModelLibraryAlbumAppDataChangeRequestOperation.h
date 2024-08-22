// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELLIBRARYALBUMAPPDATACHANGEREQUESTOPERATION_H
#define MPMODELLIBRARYALBUMAPPDATACHANGEREQUESTOPERATION_H



#import "MPAsyncOperation.h"
#import "MPModelLibraryAlbumAppDataChangeRequest.h"

@interface MPModelLibraryAlbumAppDataChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPModelLibraryAlbumAppDataChangeRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(void)execute;


@end


#endif