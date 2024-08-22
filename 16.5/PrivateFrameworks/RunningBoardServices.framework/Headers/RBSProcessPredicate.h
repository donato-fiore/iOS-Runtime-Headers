// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSPROCESSPREDICATE_H
#define RBSPROCESSPREDICATE_H

@class NSString;
@protocol RBSXPCSecureCoding, RBSProcessMatching;

#import <Foundation/Foundation.h>

#import "RBSProcessPredicateImpl.h"
#import "RBSProcessIdentity.h"

@interface RBSProcessPredicate : NSObject <RBSXPCSecureCoding, RBSProcessMatching>



@property (readonly, copy, nonatomic) NSString *beforeTranslocationBundlePath;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, copy, nonatomic) NSString *extensionPoint;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *jobLabel;
@property (readonly, nonatomic) RBSProcessPredicateImpl *predicate; // ivar: _predicate
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
+(id)predicateMatching:(id)arg0 ;
+(id)predicateMatchingAnyPredicate:(id)arg0 ;
+(id)predicateMatchingAuid:(unsigned int)arg0 ;
+(id)predicateMatchingBeforeTranslocationBundlePath:(id)arg0 ;
+(id)predicateMatchingBundleIdentifier:(id)arg0 ;
+(id)predicateMatchingBundleIdentifiers:(id)arg0 ;
+(id)predicateMatchingDextsBundledWithBundleID:(id)arg0 ;
+(id)predicateMatchingEuid:(unsigned int)arg0 ;
+(id)predicateMatchingExecPathStartsWith:(id)arg0 ;
+(id)predicateMatchingExtensionPoint:(id)arg0 ;
+(id)predicateMatchingHandle:(id)arg0 ;
+(id)predicateMatchingHostIdentifier:(id)arg0 ;
+(id)predicateMatchingIdentifier:(id)arg0 ;
+(id)predicateMatchingIdentifiers:(id)arg0 ;
+(id)predicateMatchingIdentity:(id)arg0 ;
+(id)predicateMatchingJobLabel:(id)arg0 ;
+(id)predicateMatchingLSApplicationIdentity:(id)arg0 ;
+(id)predicateMatchingPlatform:(int)arg0 ;
+(id)predicateMatchingPredicates:(id)arg0 ;
+(id)predicateMatchingServiceName:(id)arg0 ;
+(id)predicateMatchingTarget:(id)arg0 ;
+(id)predicateNotMatchingPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)processIdentifier;
-(id)processIdentifiers;
-(id)processPredicate;
-(unsigned int)auid;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif