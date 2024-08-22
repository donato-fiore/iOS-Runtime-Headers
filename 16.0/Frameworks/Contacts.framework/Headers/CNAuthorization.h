// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTHORIZATION_H
#define CNAUTHORIZATION_H

@class CNAuthorizationContext;

#import <Foundation/Foundation.h>


@interface CNAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizationContext; // ivar: _authorizationContext


+(id)logger;
-(BOOL)isAccessRestrictedForEntityType:(NSInteger)arg0 ;
-(BOOL)requestAccessForEntityType:(NSInteger)arg0 error:(*id)arg1 ;
-(NSInteger)authorizationStatusForEntityType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithAssumedIdentity:(id)arg0 ;
-(id)initWithAuthorizationContext:(id)arg0 ;
-(void)requestAccessForEntityType:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif