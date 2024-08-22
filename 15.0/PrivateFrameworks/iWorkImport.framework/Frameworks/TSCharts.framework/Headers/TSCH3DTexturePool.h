// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DTEXTUREPOOL_H
#define TSCH3DTEXTUREPOOL_H


#import <Foundation/Foundation.h>


@interface TSCH3DTexturePool : NSObject



+(id)pool;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)resourceForMaterial:(id)arg0 ;
-(struct TextureCoordinateConverter )coordinateConverterForTexture:(id)arg0 material:(id)arg1 ;
-(void)add:(id)arg0 ;


@end


#endif