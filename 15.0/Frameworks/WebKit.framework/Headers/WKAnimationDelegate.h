// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKANIMATIONDELEGATE_H
#define WKANIMATIONDELEGATE_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface WKAnimationDelegate : NSObject <CAAnimationDelegate>

 {
    NSUInteger _layerID;
    *void _layerTreeHost;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithLayerID:(NSUInteger)arg0 layerTreeHost:(*void)arg1 ;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)invalidate;


@end


#endif