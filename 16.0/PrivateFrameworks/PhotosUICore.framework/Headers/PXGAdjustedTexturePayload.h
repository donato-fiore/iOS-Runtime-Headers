// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGADJUSTEDTEXTUREPAYLOAD_H
#define PXGADJUSTEDTEXTUREPAYLOAD_H

@protocol NSCopying, PXGDisplayAssetAdjustment;

#import <Foundation/Foundation.h>

#import "PXGImageTexture.h"

@interface PXGAdjustedTexturePayload : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<PXGDisplayAssetAdjustment> *adjustment; // ivar: _adjustment
@property (readonly, nonatomic) PXGImageTexture *texture; // ivar: _texture


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTexture:(id)arg0 adjustment:(id)arg1 ;


@end


#endif