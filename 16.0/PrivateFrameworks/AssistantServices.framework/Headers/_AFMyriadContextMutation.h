// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFMYRIADCONTEXTMUTATION_H
#define _AFMYRIADCONTEXTMUTATION_H

@class NSString;
@protocol AFMyriadContextMutating;

#import <Foundation/Foundation.h>

#import "AFMyriadContext.h"
#import "AFMyriadPerceptualAudioHash.h"
#import "AFMyriadGoodnessScoreOverrideState.h"

@interface _AFMyriadContextMutation : NSObject <AFMyriadContextMutating>

 {
    AFMyriadContext *_base;
    NSUInteger _timestamp;
    AFMyriadPerceptualAudioHash *_perceptualAudioHash;
    AFMyriadGoodnessScoreOverrideState *_overrideState;
    NSInteger _activationSource;
    NSUInteger _activationExpirationTime;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getActivationSource;
-(NSUInteger)getActivationExpirationTime;
-(NSUInteger)getTimestamp;
-(id)getOverrideState;
-(id)getPerceptualAudioHash;
-(id)initWithBase:(id)arg0 ;
-(void)setActivationExpirationTime:(NSUInteger)arg0 ;
-(void)setActivationSource:(NSInteger)arg0 ;
-(void)setOverrideState:(id)arg0 ;
-(void)setPerceptualAudioHash:(id)arg0 ;
-(void)setTimestamp:(NSUInteger)arg0 ;


@end


#endif