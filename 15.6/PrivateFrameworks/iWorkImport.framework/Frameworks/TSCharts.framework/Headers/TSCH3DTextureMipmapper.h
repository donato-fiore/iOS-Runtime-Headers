// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DTEXTUREMIPMAPPER_H
#define TSCH3DTEXTUREMIPMAPPER_H


#import <Foundation/Foundation.h>


@interface TSCH3DTextureMipmapper : NSObject



+(BOOL)p_generateMipmapsBuffer:(id)arg0 level0Buffer:(id)arg1 skipFirstLevel:(BOOL)arg2 ;
+(id)mipmapsWithBuffer:(id)arg0 skipFirstLevel:(BOOL)arg1 ;
+(struct DataBuffer2DDimension )p_mapDimensionWithBuffer:(id)arg0 skipFirstLevel:(BOOL)arg1 ;


@end


#endif