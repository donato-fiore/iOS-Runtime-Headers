// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESULTWITHLINKBASE_H
#define MCMRESULTWITHLINKBASE_H

@class NSString;
@protocol MCMResultWithLink;


#import "MCMResultBase.h"
#import "MCMConcreteContainerIdentityForLibsystem.h"
#import "MCMError.h"

@interface MCMResultWithLinkBase : MCMResultBase <MCMResultWithLink>



@property (readonly, nonatomic) NSUInteger attributes; // ivar: _attributes
@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerAIdentity; // ivar: _containerAIdentity
@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerBIdentity; // ivar: _containerBIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MCMError *error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL implied; // ivar: _implied
@property (readonly) Class superclass;


-(BOOL)encodeLinkOntoXPCObject:(id)arg0 ;
-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithContainerAIdentity:(id)arg0 containerBIdentity:(id)arg1 attributes:(NSUInteger)arg2 implied:(BOOL)arg3 ;
-(id)initWithResolvedLink:(id)arg0 ;


@end


#endif