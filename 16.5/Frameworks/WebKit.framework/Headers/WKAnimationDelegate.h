// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKANIMATIONDELEGATE_H
#define WKANIMATIONDELEGATE_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface WKAnimationDelegate : NSObject <CAAnimationDelegate>

 {
    ProcessQualified<WTF::ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType>> _layerID;
    *void _layerTreeHost;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithLayerID:(struct ProcessQualified<WTF::ObjectIdentifier<WebCore::GraphicsLayer::PlatformLayerIDType>> )arg0 layerTreeHost:(*void)arg1 ;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)invalidate;


@end


#endif