// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFSETAUDIOSESSIONACTIVERESULTMUTATION_H
#define _AFSETAUDIOSESSIONACTIVERESULTMUTATION_H

@class NSError, NSString;
@protocol AFSetAudioSessionActiveResultMutating;

#import <Foundation/Foundation.h>

#import "AFSetAudioSessionActiveResult.h"

@interface _AFSetAudioSessionActiveResultMutation : NSObject <AFSetAudioSessionActiveResultMutating>

 {
    AFSetAudioSessionActiveResult *_base;
    unsigned int _audioSessionID;
    NSError *_error;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getError;
-(id)initWithBase:(id)arg0 ;
-(unsigned int)getAudioSessionID;
-(void)setAudioSessionID:(unsigned int)arg0 ;
-(void)setError:(id)arg0 ;


@end


#endif