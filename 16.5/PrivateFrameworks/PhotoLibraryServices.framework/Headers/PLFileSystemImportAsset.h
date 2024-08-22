// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLFILESYSTEMIMPORTASSET_H
#define PLFILESYSTEMIMPORTASSET_H

@class NSString, NSMutableSet, NSURL, NSSet;
@protocol PLAlbumProtocol;

#import <Foundation/Foundation.h>

#import "PLAssetJournalEntryPayload.h"
#import "PLLockedResourceTransferRecovery.h"

@interface PLFileSystemImportAsset : NSObject {
    NSString *_path;
    BOOL _pathContainsDCIM;
    NSMutableSet *_urls;
}


@property (nonatomic) int assetKind; // ivar: _assetKind
@property (readonly, nonatomic) PLAssetJournalEntryPayload *assetPayload; // ivar: _assetPayload
@property (retain, nonatomic) NSObject<PLAlbumProtocol> *destinationAlbum; // ivar: _destinationAlbum
@property (readonly, nonatomic) BOOL isInterruptedLockedResourceTransfer;
@property (readonly, nonatomic) NSURL *lockedResourceTransferMarkerFileURL; // ivar: _lockedResourceTransferMarkerFileURL
@property (retain, nonatomic) PLLockedResourceTransferRecovery *lockedResourceTransferRecovery; // ivar: _lockedResourceTransferRecovery
@property (readonly, nonatomic) NSSet *urls;


-(BOOL)isCameraKit;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithAssetPayload:(id)arg0 ;
-(id)initWithDestinationAlbum:(id)arg0 assetKind:(int)arg1 ;
-(void)addURL:(id)arg0 ;
-(void)addURLs:(id)arg0 ;


@end


#endif