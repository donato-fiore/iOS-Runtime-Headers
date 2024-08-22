// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELLIBRARYKEEPLOCALSTATUSREQUESTOPERATION_H
#define MPMODELLIBRARYKEEPLOCALSTATUSREQUESTOPERATION_H

@class NSNumber;


#import "MPAsyncOperation.h"
#import "MPModelObject.h"
#import "MPMediaLibraryView.h"

@interface MPModelLibraryKeepLocalStatusRequestOperation : MPAsyncOperation

@property (nonatomic) shared_ptr<mlcore::EntityQuery> downloadableItemsQuery; // ivar: _downloadableItemsQuery
@property (copy, nonatomic) id *downloadablePlaylistItemEntityQueryBlock; // ivar: _downloadablePlaylistItemEntityQueryBlock
@property (nonatomic) NSInteger enableState; // ivar: _enableState
@property (retain, nonatomic) MPModelObject *identifyingModelObject; // ivar: _identifyingModelObject
@property (copy, nonatomic) MPMediaLibraryView *libraryView; // ivar: _libraryView
@property (copy, nonatomic) NSNumber *redownloadableItemCount; // ivar: _redownloadableItemCount
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(void)execute;


@end


#endif