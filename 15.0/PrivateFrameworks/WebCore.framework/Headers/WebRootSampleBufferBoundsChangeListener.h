// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBROOTSAMPLEBUFFERBOUNDSCHANGELISTENER_H
#define WEBROOTSAMPLEBUFFERBOUNDSCHANGELISTENER_H


#import <Foundation/Foundation.h>


@interface WebRootSampleBufferBoundsChangeListener : NSObject {
    Function<void ()> _callback;
    RetainPtr<CALayer> _rootLayer;
}




-(id)initWithCallback:(*void)arg0 ;
-(void)begin:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)stop;


@end


#endif