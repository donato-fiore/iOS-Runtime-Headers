// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKCLIENTTOKENSESSION_H
#define TKCLIENTTOKENSESSION_H

@class LAContext, NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "TKClientToken.h"

@interface TKClientTokenSession : NSObject

@property (retain, nonatomic) LAContext *LAContext; // ivar: _LAContext
@property (retain, nonatomic) id *_testing_AuthContextUsed; // ivar: __testing_AuthContextUsed
@property (nonatomic) BOOL _testing_AuthenticateInternally; // ivar: __testing_AuthenticateInternally
@property (nonatomic) BOOL _testing_ForceAuthenticationNeeded; // ivar: __testing_ForceAuthenticationNeeded
@property (nonatomic) BOOL authenticateWhenNeeded; // ivar: _authenticateWhenNeeded
@property (readonly, nonatomic) NSArray *certificates; // ivar: _certificates
@property (readonly, nonatomic) NSArray *identities; // ivar: _identities
@property (readonly, nonatomic) NSArray *keys; // ivar: _keys
@property (readonly, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSString *slotName; // ivar: _slotName
@property (readonly, nonatomic) TKClientToken *token; // ivar: _token


-(BOOL)deleteObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)evaluateAccessControl:(id)arg0 forOperation:(id)arg1 error:(*id)arg2 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)_initWithToken:(id)arg0 LAContext:(id)arg1 parameters:(id)arg2 error:(*id)arg3 ;
-(id)createObjectWithAttributes:(id)arg0 error:(*id)arg1 ;
-(id)initWithToken:(id)arg0 LAContext:(id)arg1 parameters:(id)arg2 error:(*id)arg3 ;
-(id)initWithTokenID:(id)arg0 LAContext:(id)arg1 error:(*id)arg2 ;
-(id)objectForObjectID:(id)arg0 error:(*id)arg1 ;
-(id)processObjectCreationAttributes:(id)arg0 error:(*id)arg1 ;


@end


#endif