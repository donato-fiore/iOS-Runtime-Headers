// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVPLAYBACKASSET_H
#define SSVPLAYBACKASSET_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SSVPlaybackAsset : NSObject

@property (readonly, nonatomic) NSString *URLString;
@property (readonly, copy, nonatomic) NSDictionary *assetDictionary; // ivar: _assetDictionary
@property (readonly, nonatomic) NSString *downloadKey;
@property (readonly, nonatomic) NSString *flavor;
@property (readonly, nonatomic) NSArray *sinfs;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAssetDictionary:(id)arg0 ;


@end


#endif