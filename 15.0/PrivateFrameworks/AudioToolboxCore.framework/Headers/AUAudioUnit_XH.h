// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUAUDIOUNIT_XH_H
#define AUAUDIOUNIT_XH_H

@class XPC, NSExtension, NSUUID;
@protocol OS_dispatch_queue;


#import "AUAudioUnit_XPC.h"

@interface AUAudioUnit_XH : XPC {
    NSExtension *_extension;
    NSUUID *_requestIdentifier;
    NSObject<OS_dispatch_queue> *_viewControllerRequestQueue;
    id *_speechSynthesisOutputMetadataBlock;
}


@property (retain, nonatomic) AUAudioUnit_XPC *strongInstance; // ivar: _strongInstance


+(void)instantiateWithExtension:(id)arg0 componentDescription:(struct AudioComponentDescription )arg1 instance:(struct OpaqueAudioComponentInstance *)arg2 options:(unsigned int)arg3 completionHandler:(id)arg4 ;
-(id)speechSynthesisOutputMetadataBlock:(SEL)arg0 ;
-(void)_doOpen:(id)arg0 completion:(id)arg1 ;
-(void)_internalInitWithExtension:(id)arg0 componentDescription:(struct AudioComponentDescription )arg1 instance:(struct OpaqueAudioComponentInstance *)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)requestViewControllerWithCompletionHandler:(id)arg0 ;
-(void)setSpeechSynthesisOutputMetadataBlock:(id)arg0 ;


@end


#endif