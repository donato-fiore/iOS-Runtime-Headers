// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMPORTRECORD_H
#define PHIMPORTRECORD_H

@class NSString, NSMutableArray;


#import "PHImportExceptionRecorder.h"
#import "PHImportAsset.h"
#import "PHImportTimerCollection.h"

@interface PHImportRecord : PHImportExceptionRecorder {
    NSString *_rawAssetIdentifier;
}


@property (retain, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (readonly) BOOL canReference;
@property (retain, nonatomic) NSString *downloadedPath; // ivar: _downloadedPath
@property (retain, nonatomic) PHImportAsset *importAsset; // ivar: _importAsset
@property (nonatomic) unsigned char importType; // ivar: _importType
@property (readonly, nonatomic) NSString *rawAssetIdentifier;
@property (nonatomic) BOOL referencedImport; // ivar: _referencedImport
@property (retain, nonatomic) NSMutableArray *relatedRecords; // ivar: _relatedRecords
@property (retain, nonatomic) PHImportTimerCollection *timers; // ivar: _timers


-(BOOL)needsDownload;
-(id)allAssetIdentifiers;
-(id)allImportAssets;
-(id)allImportRecords;
-(id)description;
-(id)descriptionWithPrefix:(id)arg0 ;
-(id)initWithImportAsset:(id)arg0 ;
-(id)recordForAsset:(id)arg0 ;
-(void)addRelatedRecord:(id)arg0 ;
-(void)cleanupAfterFailure;


@end


#endif