// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBDOWNLOADCLIPSLOADER_H
#define MBDOWNLOADCLIPSLOADER_H

@class NSSet, NSString, NSMutableDictionary, NSRecursiveLock;
@protocol PHAssetRepresentationDownloadObserver;


#import "MBClipsLoader.h"

@interface MBDownloadClipsLoader : MBClipsLoader <PHAssetRepresentationDownloadObserver>



@property (retain, nonatomic) NSSet *assetURLs; // ivar: _assetURLs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *identifierURLsToClipsMap; // ivar: _identifierURLsToClipsMap
@property (retain, nonatomic) NSSet *insertedAssetURLs; // ivar: _insertedAssetURLs
@property (readonly) Class superclass;
@property (retain, nonatomic) NSRecursiveLock *updateLock; // ivar: _updateLock


-(id)fetchAssetURLs;
-(id)init;
-(void)downloadStateOfAssetRepresentationDidChange:(id)arg0 previousState:(NSUInteger)arg1 currentState:(NSUInteger)arg2 ;
-(void)load;
-(void)loadClipsFromURLs:(id)arg0 ;


@end


#endif