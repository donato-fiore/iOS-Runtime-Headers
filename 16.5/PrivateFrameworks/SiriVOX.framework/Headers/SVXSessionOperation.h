// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSESSIONOPERATION_H
#define SVXSESSIONOPERATION_H


#import <Foundation/Foundation.h>

#import "SVXActivationContext.h"
#import "SVXDeactivationContext.h"

@interface SVXSessionOperation : NSObject {
    NSInteger _type;
    SVXActivationContext *_activationContext;
    id *_activationCompletion;
    SVXDeactivationContext *_deactivationContext;
    id *_deactivationCompletion;
}




// -(BOOL)handleOperationUsingActivationBlock:(id)arg0 deactivationBlock:(unk)arg1  ;
-(id)description;
-(id)initWithActivationContext:(id)arg0 completion:(id)arg1 ;
-(id)initWithDeactivationContext:(id)arg0 completion:(id)arg1 ;


@end


#endif