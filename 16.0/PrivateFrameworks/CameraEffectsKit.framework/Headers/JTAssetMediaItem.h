// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JTASSETMEDIAITEM_H
#define JTASSETMEDIAITEM_H

@class NSString, PHAsset, NSURL;


#import "JTLocalAssetMediaItem.h"

@interface JTAssetMediaItem : JTLocalAssetMediaItem

@property (copy, nonatomic) NSString *adjustedFingerprint; // ivar: _adjustedFingerprint
@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (copy, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (retain, nonatomic) NSURL *assetLocalURL; // ivar: _assetLocalURL
@property (copy, nonatomic) NSString *masterFingerprint; // ivar: _masterFingerprint


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)info;
-(id)init;
-(id)initWithAssetIdentifier:(id)arg0 ;
-(id)initWithInfo:(id)arg0 delegate:(id)arg1 ;
-(void)checkIfAssetIsMissing;
-(void)dealloc;
-(void)fetchAssetForce:(BOOL)arg0 ;
-(void)reloadAsset;


@end


#endif