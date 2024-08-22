// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IXPROMISEDAPPREFERENCE_H
#define IXPROMISEDAPPREFERENCE_H



#import "IXOwnedDataPromise.h"
#import "IXApplicationIdentity.h"
#import "IXPromisedAppReferenceSeed.h"

@interface IXPromisedAppReference : IXOwnedDataPromise

@property (readonly, nonatomic) IXApplicationIdentity *identity;
@property (readonly, nonatomic) NSUInteger installationDomain;
@property (retain, nonatomic) IXPromisedAppReferenceSeed *seed;


+(BOOL)supportsSecureCoding;
+(id)acquireReferenceToAppWithIdentity:(id)arg0 inDomain:(NSUInteger)arg1 forClient:(NSUInteger)arg2 ifMatchingPredicate:(id)arg3 error:(*id)arg4 ;
+(id)acquireReferenceToAppWithIdentity:(id)arg0 inDomain:(NSUInteger)arg1 forClient:(NSUInteger)arg2 matchingAppInRecord:(id)arg3 error:(*id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 client:(NSUInteger)arg1 forAppWithIdentity:(id)arg2 inDomain:(NSUInteger)arg3 ifMatchingPredicate:(id)arg4 error:(*id)arg5 ;
-(id)initWithSeed:(id)arg0 ;
-(id)placeholderPromiseForInstallType:(NSUInteger)arg0 withError:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetWithCompletion:(id)arg0 ;


@end


#endif