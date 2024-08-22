// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYAUTHENTICATIONCONTEXT_H
#define BYAUTHENTICATIONCONTEXT_H

@class NSString, LAContext;
@protocol LAUIDelegate;

#import <Foundation/Foundation.h>


@interface BYAuthenticationContext : NSObject <LAUIDelegate>



@property (retain, nonatomic) NSString *secret; // ivar: _secret
@property (retain, nonatomic) LAContext *underlyingContext; // ivar: _underlyingContext


+(void)createContextWithSecret:(id)arg0 policy:(NSInteger)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)initWithSecret:(id)arg0 ;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;


@end


#endif