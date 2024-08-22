// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDASSETPACK_H
#define TDASSETPACK_H

@class NSString, CUIMutableCommonAssetStorage, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TDAssetPack : NSObject <NSCopying>



@property (copy, nonatomic) NSString *assetPackIdentifier; // ivar: assetPackIdentifier
@property (retain) CUIMutableCommonAssetStorage *assetStore; // ivar: assetStore
@property (copy, nonatomic) NSString *outputPath; // ivar: outputPath
@property (retain, nonatomic) NSSet *tags; // ivar: tags
@property (nonatomic) BOOL wasModified; // ivar: wasModified


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif