// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKLOCALIMAGESOURCE_H
#define GKLOCALIMAGESOURCE_H

@class NSMapTable;


#import "GKImageSource.h"

@interface GKLocalImageSource : GKImageSource

@property (retain, nonatomic) NSMapTable *keysForSizes; // ivar: _keysForSizes


-(id)imageForImageSize:(struct CGSize )arg0 ;
-(id)keyForImageSize:(struct CGSize )arg0 ;
-(void)cacheImageUsingGamed:(id)arg0 cacheSubdirectory:(id)arg1 withHandler:(id)arg2 ;
-(void)cachedImageFromGamedWithSubdirectory:(id)arg0 handler:(id)arg1 ;
-(void)deleteImageUsingGamedWithSubdirectory:(id)arg0 withHandler:(id)arg1 ;


@end


#endif