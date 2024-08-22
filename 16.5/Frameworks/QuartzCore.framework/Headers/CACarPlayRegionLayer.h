// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACARPLAYREGIONLAYER_H
#define CACARPLAYREGIONLAYER_H

@class NSString;


#import "CALayer.h"

@interface CACarPlayRegionLayer : CALayer

@property (copy) NSString *identifier;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)_hasRenderLayerSubclass;
-(*void)_copyRenderLayer:(*void)arg0 layerFlags:(unsigned int)arg1 commitFlags:(*unsigned int)arg2 ;


@end


#endif