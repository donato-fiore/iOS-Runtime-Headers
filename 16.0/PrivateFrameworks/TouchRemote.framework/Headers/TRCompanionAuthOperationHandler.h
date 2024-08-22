// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRCOMPANIONAUTHOPERATIONHANDLER_H
#define TRCOMPANIONAUTHOPERATIONHANDLER_H

@class NSString;
@protocol TROperationHandler;

#import <Foundation/Foundation.h>


@interface TRCompanionAuthOperationHandler : NSObject <TROperationHandler>



@property (copy, nonatomic) id *companionAuthHandler; // ivar: _companionAuthHandler
@property (copy, nonatomic) id *companionAuthHandlerWithError; // ivar: _companionAuthHandlerWithError
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCompanionAuthHandler:(id)arg0 ;
-(id)initWithCompanionAuthHandlerWithError:(id)arg0 ;
-(void)_handleCompanionAuthenticationRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)registerMessageHandlersForSession:(id)arg0 ;


@end


#endif