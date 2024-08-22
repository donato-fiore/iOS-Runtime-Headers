// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHIMPORTOPTIONS_H
#define PHIMPORTOPTIONS_H

@class NSString, NSSortDescriptor, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PHAssetCollection.h"
#import "PHCollectionList.h"
#import "PHImportSource.h"
#import "PHPhotoLibrary.h"
#import "PHLibraryScope.h"

@interface PHImportOptions : NSObject {
    options_bits _options_bits;
}


@property (nonatomic) BOOL allowDuplicates;
@property (nonatomic) BOOL allowUnsupported;
@property (nonatomic) BOOL deleteAfterImport;
@property (retain, nonatomic) PHAssetCollection *destinationAlbum; // ivar: _destinationAlbum
@property (retain, nonatomic) PHCollectionList *destinationFolder; // ivar: _destinationFolder
@property (nonatomic) unsigned char fileOperation;
@property (nonatomic) BOOL hideProgress;
@property (retain, nonatomic) PHImportSource *importSource; // ivar: _importSource
@property (nonatomic) short importedBy;
@property (retain, nonatomic) PHPhotoLibrary *library; // ivar: _library
@property (retain, nonatomic) PHLibraryScope *libraryScope; // ivar: _libraryScope
@property (nonatomic) unsigned char metadataAddMode;
@property (nonatomic) BOOL omitImportComplete;
@property (retain, nonatomic) NSString *personId; // ivar: _personId
@property (nonatomic) BOOL preserveFolderStructure;
@property (nonatomic) BOOL shouldImportAsReferenced;
@property (nonatomic) BOOL skipAlertWhenFinished;
@property (nonatomic) BOOL skipDiskSpaceCheck;
@property (retain, nonatomic) NSSortDescriptor *sortDescriptor; // ivar: _sortDescriptor
@property (retain, nonatomic) NSMutableDictionary *userIptcMetadata; // ivar: _userIptcMetadata


-(id)description;
-(id)init;


@end


#endif