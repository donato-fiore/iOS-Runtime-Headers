// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRACTIVATIONOPERATIONHANDLER_H
#define TRACTIVATIONOPERATIONHANDLER_H

@class NSString;
@protocol TROperationHandler;

#import <Foundation/Foundation.h>


@interface TRActivationOperationHandler : NSObject <TROperationHandler>



@property (copy, nonatomic) id *activationHandler; // ivar: _activationHandler
@property (copy, nonatomic) id *activationHandlerWithError; // ivar: _activationHandlerWithError
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithActivationHandler:(id)arg0 ;
-(id)initWithActivationHandlerWithError:(id)arg0 ;
-(void)_handleActivationRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)registerMessageHandlersForSession:(id)arg0 ;


@end


#endif