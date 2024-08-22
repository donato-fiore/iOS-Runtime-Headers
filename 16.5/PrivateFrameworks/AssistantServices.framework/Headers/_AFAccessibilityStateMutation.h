// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFACCESSIBILITYSTATEMUTATION_H
#define _AFACCESSIBILITYSTATEMUTATION_H

@class NSString;
@protocol AFAccessibilityStateMutating;

#import <Foundation/Foundation.h>

#import "AFAccessibilityState.h"

@interface _AFAccessibilityStateMutation : NSObject <AFAccessibilityStateMutating>

 {
    AFAccessibilityState *_base;
    NSInteger _isVoiceOverTouchEnabled;
    NSInteger _isVibrationDisabled;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getIsVibrationDisabled;
-(NSInteger)getIsVoiceOverTouchEnabled;
-(id)initWithBase:(id)arg0 ;
-(void)setIsVibrationDisabled:(NSInteger)arg0 ;
-(void)setIsVoiceOverTouchEnabled:(NSInteger)arg0 ;


@end


#endif