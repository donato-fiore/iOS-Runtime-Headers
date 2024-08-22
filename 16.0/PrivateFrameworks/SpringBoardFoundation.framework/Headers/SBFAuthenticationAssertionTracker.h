// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFAUTHENTICATIONASSERTIONTRACKER_H
#define SBFAUTHENTICATIONASSERTIONTRACKER_H

@class NSHashTable, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBFAuthenticationAssertionTracker : NSObject <BSDescriptionProviding>

 {
    *__MKBAssertion _mkbAssertion;
    NSHashTable *_assertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasActiveAssertions;
-(BOOL)isAssertionValid:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)mkbAssertionOptions;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addAssertion:(id)arg0 ;
-(void)dealloc;
-(void)removeAssertion:(id)arg0 ;


@end


#endif