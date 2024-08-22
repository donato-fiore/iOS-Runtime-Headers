// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFCONNECTIONUSERINTERACTIONASSERTION_H
#define AFCONNECTIONUSERINTERACTIONASSERTION_H


#import <Foundation/Foundation.h>

#import "AFSafetyBlock.h"

@interface AFConnectionUserInteractionAssertion : NSObject {
    AFSafetyBlock *_safetyBlock;
}




-(id)initWithCompletion:(id)arg0 ;
-(void)releaseAssertion;


@end


#endif