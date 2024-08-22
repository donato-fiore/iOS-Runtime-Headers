// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPASSERTIONMANAGER_H
#define HDSPASSERTIONMANAGER_H

@class NSMutableDictionary, NSString;
@protocol BSDescriptionProviding, HDSPDiagnosticsProvider;

#import <Foundation/Foundation.h>


@interface HDSPAssertionManager : NSObject <BSDescriptionProviding, HDSPDiagnosticsProvider>



@property (retain, nonatomic) NSMutableDictionary *assertions; // ivar: _assertions
@property (readonly, nonatomic) os_unfair_lock_s assertionsLock; // ivar: _assertionsLock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)assertionClassForType:(NSUInteger)arg0 ;
-(id)_assertionsOfType:(NSUInteger)arg0 ;
-(id)activeAssertionIdentifiersOfType:(NSUInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_withLock:(id)arg0 ;
-(void)releaseAssertionWithIdentifier:(id)arg0 ;
-(void)takeAssertion:(id)arg0 ;
-(void)takeAssertionWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(void)takeAssertionWithIdentifier:(id)arg0 type:(NSUInteger)arg1 timeout:(CGFloat)arg2 ;
-(void)takeIndefiniteAssertionWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif