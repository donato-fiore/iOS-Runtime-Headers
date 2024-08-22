// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHINDEXMANAGER_H
#define PXSEARCHINDEXMANAGER_H

@class PHPhotoLibrary, PSIDatabase, NSTimer, PLSearchMetadataStore;

#import <Foundation/Foundation.h>


@interface PXSearchIndexManager : NSObject

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) PSIDatabase *searchIndex; // ivar: _searchIndex
@property (retain, nonatomic) NSTimer *searchIndexStatusTimer; // ivar: _searchIndexStatusTimer
@property (readonly, nonatomic) PLSearchMetadataStore *searchMetadataStore; // ivar: _searchMetadataStore


-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_openSearchIndexWithCompletion:(id)arg0 ;
-(void)startMonitoringSearchIndexStatus;
-(void)stopMonitoringSearchIndexStatus;


@end


#endif