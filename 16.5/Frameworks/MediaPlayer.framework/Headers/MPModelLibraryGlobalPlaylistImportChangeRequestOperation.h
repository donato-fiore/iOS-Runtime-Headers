// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELLIBRARYGLOBALPLAYLISTIMPORTCHANGEREQUESTOPERATION_H
#define MPMODELLIBRARYGLOBALPLAYLISTIMPORTCHANGEREQUESTOPERATION_H

@class NSString;


#import "MPAsyncOperation.h"
#import "MPMediaLibrary.h"

@interface MPModelLibraryGlobalPlaylistImportChangeRequestOperation : MPAsyncOperation

@property (copy, nonatomic) NSString *globalPlaylistID; // ivar: _globalPlaylistID
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (nonatomic) BOOL shouldLibraryAdd; // ivar: _shouldLibraryAdd


-(void)execute;


@end


#endif