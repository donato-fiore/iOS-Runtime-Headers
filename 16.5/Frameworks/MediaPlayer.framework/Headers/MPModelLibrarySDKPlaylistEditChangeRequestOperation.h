// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELLIBRARYSDKPLAYLISTEDITCHANGEREQUESTOPERATION_H
#define MPMODELLIBRARYSDKPLAYLISTEDITCHANGEREQUESTOPERATION_H

@class NSOperationQueue;


#import "MPModelLibraryPlaylistEditChangeRequestOperation.h"

@interface MPModelLibrarySDKPlaylistEditChangeRequestOperation : MPModelLibraryPlaylistEditChangeRequestOperation {
    NSOperationQueue *_operationQueue;
}




-(void)_executeWithCloudLibraryEnabledConfirmed;
-(void)execute;


@end


#endif