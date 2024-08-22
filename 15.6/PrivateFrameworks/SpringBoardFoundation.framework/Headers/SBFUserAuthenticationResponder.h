// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFUSERAUTHENTICATIONRESPONDER_H
#define SBFUSERAUTHENTICATIONRESPONDER_H

@class NSString;
@protocol SBFAuthenticationResponder;

#import <Foundation/Foundation.h>


@interface SBFUserAuthenticationResponder : NSObject <SBFAuthenticationResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *failureHandler; // ivar: _failureHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidHandler; // ivar: _invalidHandler
@property (copy, nonatomic) id *successHandler; // ivar: _successHandler
@property (readonly) Class superclass;


// +(id)responderWithSuccessHandler:(id)arg0 failureHandler:(unk)arg1 invalidHandler:(id)arg2  ;
// -(id)initWithSuccessHandler:(id)arg0 failureHandler:(unk)arg1 invalidHandler:(id)arg2  ;
-(void)handleFailedAuthenticationRequest:(id)arg0 error:(id)arg1 ;
-(void)handleInvalidAuthenticationRequest:(id)arg0 ;
-(void)handleSuccessfulAuthenticationRequest:(id)arg0 ;


@end


#endif