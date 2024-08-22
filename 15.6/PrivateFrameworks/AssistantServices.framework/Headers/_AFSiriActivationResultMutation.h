// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFSIRIACTIVATIONRESULTMUTATION_H
#define _AFSIRIACTIVATIONRESULTMUTATION_H

@class NSError, NSString;
@protocol AFSiriActivationResultMutating;

#import <Foundation/Foundation.h>

#import "AFSiriActivationResult.h"

@interface _AFSiriActivationResultMutation : NSObject <AFSiriActivationResultMutating>

 {
    AFSiriActivationResult *_baseModel;
    NSInteger _actionType;
    NSError *_error;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setActionType:(NSInteger)arg0 ;
-(void)setError:(id)arg0 ;


@end


#endif