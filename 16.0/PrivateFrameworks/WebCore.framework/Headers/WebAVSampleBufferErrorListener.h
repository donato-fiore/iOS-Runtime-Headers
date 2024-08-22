// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBAVSAMPLEBUFFERERRORLISTENER_H
#define WEBAVSAMPLEBUFFERERRORLISTENER_H


#import <Foundation/Foundation.h>


@interface WebAVSampleBufferErrorListener : NSObject {
    WeakPtr<WebCore::SourceBufferPrivateAVFObjC, WTF::EmptyCounter> _parent;
    Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _layers;
    Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _renderers;
}




-(id)initWithParent:(*void)arg0 ;
-(void)audioRendererWasAutomaticallyFlushed:(id)arg0 ;
-(void)beginObservingLayer:(id)arg0 ;
-(void)beginObservingRenderer:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)layerFailedToDecode:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)stopObservingLayer:(id)arg0 ;
-(void)stopObservingRenderer:(id)arg0 ;


@end


#endif