// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFSETAUDIOSESSIONACTIVECONTEXTMUTATION_H
#define _AFSETAUDIOSESSIONACTIVECONTEXTMUTATION_H

@class NSString;
@protocol AFSetAudioSessionActiveContextMutating;

#import <Foundation/Foundation.h>

#import "AFSetAudioSessionActiveContext.h"
#import "AFSpeechRequestOptions.h"

@interface _AFSetAudioSessionActiveContextMutation : NSObject <AFSetAudioSessionActiveContextMutating>

 {
    AFSetAudioSessionActiveContext *_base;
    NSUInteger _options;
    NSInteger _reason;
    AFSpeechRequestOptions *_speechRequestOptions;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getReason;
-(NSUInteger)getOptions;
-(id)getSpeechRequestOptions;
-(id)initWithBase:(id)arg0 ;
-(void)setOptions:(NSUInteger)arg0 ;
-(void)setReason:(NSInteger)arg0 ;
-(void)setSpeechRequestOptions:(id)arg0 ;


@end


#endif