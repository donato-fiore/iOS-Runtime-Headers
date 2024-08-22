// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRITTSSYNTHESISENGINE_H
#define SIRITTSSYNTHESISENGINE_H

@class NSLock, NSString;

#import <Foundation/Foundation.h>


@interface SiriTTSSynthesisEngine : NSObject

@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (readonly, nonatomic) NSString *resourcePath; // ivar: _resourcePath
@property (nonatomic) *void synthesizer; // ivar: _synthesizer
@property (retain, nonatomic) NSString *tag; // ivar: _tag
@property (readonly, nonatomic) NSString *voicePath; // ivar: _voicePath


+(BOOL)hasPhaticResponsesWithVoicePath:(id)arg0 ;
-(BOOL)_preheatWithError:(*id)arg0 ;
-(BOOL)_unlockedLoadResourceWithPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)_unlockedSynthesize:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadResourceWithPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)preheatWithError:(*id)arg0 ;
-(BOOL)synthesize:(id)arg0 error:(*id)arg1 ;
-(id)initWithVoicePath:(id)arg0 resourcePath:(id)arg1 error:(*id)arg2 ;
-(void)_unlockedUnloadResource:(id)arg0 ;
-(void)dealloc;
-(void)stopSynthesis;
-(void)unloadResource:(id)arg0 ;


@end


#endif