// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFMYRIADGOODNESSSCOREOVERRIDESTATEMUTATION_H
#define _AFMYRIADGOODNESSSCOREOVERRIDESTATEMUTATION_H

@class NSString;
@protocol AFMyriadGoodnessScoreOverrideStateMutating;

#import <Foundation/Foundation.h>

#import "AFMyriadGoodnessScoreOverrideState.h"

@interface _AFMyriadGoodnessScoreOverrideStateMutation : NSObject <AFMyriadGoodnessScoreOverrideStateMutating>

 {
    AFMyriadGoodnessScoreOverrideState *_base;
    NSInteger _overrideOption;
    NSString *_reason;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getOverrideOption;
-(id)getReason;
-(id)initWithBase:(id)arg0 ;
-(void)setOverrideOption:(NSInteger)arg0 ;
-(void)setReason:(id)arg0 ;


@end


#endif