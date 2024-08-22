// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPTESTINGDELETION_H
#define FPTESTINGDELETION_H

@class NSString;
@protocol NSFileProviderTestingDeletion;


#import "FPTestingOperation.h"
#import "NSFileProviderDomainVersion.h"
#import "NSFileProviderItemVersion.h"

@interface FPTestingDeletion : FPTestingOperation <NSFileProviderTestingDeletion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion; // ivar: _domainVersion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *sourceItemIdentifier; // ivar: _sourceItemIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSFileProviderItemVersion *targetItemBaseVersion; // ivar: _targetItemBaseVersion
@property (readonly, nonatomic) NSString *targetItemIdentifier; // ivar: _targetItemIdentifier
@property (readonly, nonatomic) NSUInteger targetSide;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)asDeletion;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperationIdentifier:(id)arg0 sourceItemIdentifier:(id)arg1 targetItemIdentifier:(id)arg2 targetItemBaseVersion:(id)arg3 domainVersion:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif