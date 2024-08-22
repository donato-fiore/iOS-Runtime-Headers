// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETTOPOAIRPORTDEVICELAYER_H
#define NETTOPOAIRPORTDEVICELAYER_H



#import "NetTopoObjectLayer.h"

@interface NetTopoAirPortDeviceLayer : NetTopoObjectLayer



-(id)debugDescription;
-(id)description;
-(id)initWithUIStyle:(int)arg0 andOwningView:(id)arg1 ;
-(struct ? )getConnectionAttachmentLocations;
-(void)dealloc;
-(void)initNetTopoAirPortDeviceLayerCommonWithStyle:(int)arg0 andOwningView:(id)arg1 ;
-(void)layoutSublayers;
-(void)pickCorrectImagesForContentsScale:(CGFloat)arg0 ;
-(void)setAssociatedNode:(id)arg0 ;


@end


#endif