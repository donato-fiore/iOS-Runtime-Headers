// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETTOPOMINISTATICLAYOUT_H
#define NETTOPOMINISTATICLAYOUT_H

@class NSMutableArray, CALayer, NSArray;

#import <Foundation/Foundation.h>


@interface NetTopoMiniStaticLayout : NSObject {
    id *_owningView;
    NSMutableArray *_connectionLayers;
}


@property (retain, nonatomic) CALayer *containerLayer; // ivar: _containerLayer
@property (nonatomic) int layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) id *owningView;
@property (readonly, nonatomic) NSArray *topoDeviceLayers; // ivar: _topoDeviceLayers
@property (retain, nonatomic) NSArray *topoDevicesDescriptor; // ivar: _topoDevicesDescriptor


-(id)initWithContainerLayer:(id)arg0 andOptions:(int)arg1 ;
-(struct CGImage *)imageForDeviceSpec:(id)arg0 wantSmall:(BOOL)arg1 forContentsScale:(CGFloat)arg2 ;
-(void)createLayoutForDevices:(id)arg0 ;
-(void)dealloc;
-(void)destroyDeviceLayers;
-(void)performLayout;


@end


#endif