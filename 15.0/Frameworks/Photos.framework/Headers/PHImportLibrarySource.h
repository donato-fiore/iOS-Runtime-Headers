// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMPORTLIBRARYSOURCE_H
#define PHIMPORTLIBRARYSOURCE_H

@class NSURL, NSDictionary, PLPhotoLibraryPathManager;


#import "PHImportUrlSource.h"

@interface PHImportLibrarySource : PHImportUrlSource {
    NSURL *_libraryURL;
    NSDictionary *_renderResourcePathsByIdentifier;
}


@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager


-(BOOL)_isValidPhotoLibraryWithError:(*id)arg0 ;
-(BOOL)canReference;
-(BOOL)containsSupportedMediaWithImportExceptions:(*id)arg0 ;
-(BOOL)isLibrary;
-(id)assetsByProcessingItem:(id)arg0 ;
-(id)initWithUrls:(id)arg0 ;
-(id)name;
-(id)productKind;
-(id)resourcePathsByUuidForPaths:(id)arg0 ;
-(void)beginProcessingWithCompletion:(id)arg0 ;
-(void)loadSidecarsFor:(id)arg0 ;


@end


#endif