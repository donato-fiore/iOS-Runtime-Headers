// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXTANGIERREPDIRECTLAYERHOSTPROVIDER_H
#define SXTANGIERREPDIRECTLAYERHOSTPROVIDER_H

@class CALayer, NSString;
@protocol TSDRepDirectLayerHostProvider;

#import <Foundation/Foundation.h>


@interface SXTangierRepDirectLayerHostProvider : NSObject <TSDRepDirectLayerHostProvider>



@property (retain, nonatomic) CALayer *aboveRepsLayerHost; // ivar: _aboveRepsLayerHost
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CALayer *overlayLayerHost; // ivar: _overlayLayerHost
@property (readonly) Class superclass;
@property (retain, nonatomic) CALayer *underRepsLayerHost; // ivar: _underRepsLayerHost


-(id)directLayerHostForRep:(id)arg0 ;
-(void)directLayerHostUpdateAdditionalLayersAboveRepLayers:(id)arg0 ;
-(void)directLayerHostUpdateAdditionalLayersUnderRepLayers:(id)arg0 ;
-(void)directLayerHostUpdateRepOverlayLayers:(id)arg0 ;


@end


#endif