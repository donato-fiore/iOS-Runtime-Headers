// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFASSERTIONIMPL_H
#define _AFASSERTIONIMPL_H

@class NSString, NSUUID;
@protocol AFAssertion;

#import <Foundation/Foundation.h>

#import "AFTwoArgumentSafetyBlock.h"
#import "AFAssertionContext.h"

@interface _AFAssertionImpl : NSObject <AFAssertion>

 {
    AFTwoArgumentSafetyBlock *_relinquishmentHandler;
}


@property (readonly, nonatomic) AFAssertionContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithUUID:(id)arg0 context:(id)arg1 relinquishmentHandler:(id)arg2 ;
-(void)invokeRelinquishmentHandlerWithContext:(id)arg0 error:(id)arg1 ;


@end


#endif