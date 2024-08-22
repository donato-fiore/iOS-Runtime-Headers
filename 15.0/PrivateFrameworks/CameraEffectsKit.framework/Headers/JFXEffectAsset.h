// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXEFFECTASSET_H
#define JFXEFFECTASSET_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "JFXEffectAssetAttributes.h"

@interface JFXEffectAsset : NSObject

@property (readonly, nonatomic) NSString *assetID; // ivar: _assetID
@property (readonly, nonatomic) JFXEffectAssetAttributes *attributes; // ivar: _attributes
@property (readonly, nonatomic) BOOL contentUpdateAvailable; // ivar: _contentUpdateAvailable
@property (readonly, nonatomic) NSURL *localURL; // ivar: _localURL


+(id)firstAssetInAssets:(id)arg0 matchingFilterAttributes:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAssetID:(id)arg0 URL:(id)arg1 copyOfAttributes:(id)arg2 ;
-(id)initWithAssetID:(id)arg0 URL:(id)arg1 copyOfAttributes:(id)arg2 contentUpdateAvailable:(BOOL)arg3 ;


@end


#endif