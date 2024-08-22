// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSSIGNINCONTEXT_H
#define AMSSIGNINCONTEXT_H

@class NSString;
@protocol AMSHashable;

#import <Foundation/Foundation.h>


@interface AMSSignInContext : NSObject <AMSHashable>



@property (nonatomic) BOOL canMakeAccountActive; // ivar: _canMakeAccountActive
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *debugReason; // ivar: _debugReason
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *hashedDescription;
@property (nonatomic) BOOL ignoreAccountConversion; // ivar: _ignoreAccountConversion
@property (nonatomic) BOOL skipAuthentication; // ivar: _skipAuthentication
@property (readonly) Class superclass;


-(id)init;


@end


#endif