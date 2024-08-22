// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHIMPORTLEGACYLIBRARYSOURCE_H
#define PHIMPORTLEGACYLIBRARYSOURCE_H

@class NSURL;


#import "PHImportUrlSource.h"

@interface PHImportLegacyLibrarySource : PHImportUrlSource {
    NSURL *_libraryURL;
}




-(BOOL)canReference;
-(BOOL)containsSupportedMediaWithImportExceptions:(*id)arg0 ;
-(BOOL)isLibrary;
-(BOOL)isReadonlyVolume;
-(id)initWithUrls:(id)arg0 ;
-(id)name;
-(id)productKind;
-(void)loadSidecarsFor:(id)arg0 ;


@end


#endif