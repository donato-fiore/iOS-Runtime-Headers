// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPPROCESSASSERTION_H
#define CPPROCESSASSERTION_H

@class NSString, BKSProcessAssertion;

#import <Foundation/Foundation.h>


@interface CPProcessAssertion : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) BKSProcessAssertion *processAssertion; // ivar: _processAssertion


+(id)processAssertionNameForBundleIdentifier:(id)arg0 ;
+(id)processAssertionWithBundleIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)name;
-(void)acquireWithCompletionHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif