// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPTESTINGMODIFICATION_H
#define FPTESTINGMODIFICATION_H

@class NSString;
@protocol NSFileProviderTestingModification, NSFileProviderItem;


#import "FPTestingOperation.h"
#import "NSFileProviderDomainVersion.h"
#import "NSFileProviderItemVersion.h"

@interface FPTestingModification : FPTestingOperation <NSFileProviderTestingModification>



@property (readonly, nonatomic) NSUInteger changedFields; // ivar: _changedFields
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion; // ivar: _domainVersion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger rawFields; // ivar: _rawFields
@property (readonly, nonatomic) NSInteger snapshotVersion; // ivar: _snapshotVersion
@property (readonly, nonatomic) NSObject<NSFileProviderItem> *sourceItem; // ivar: _sourceItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSFileProviderItemVersion *targetItemBaseVersion; // ivar: _targetItemBaseVersion
@property (readonly, nonatomic) NSString *targetItemIdentifier; // ivar: _targetItemIdentifier
@property (readonly, nonatomic) NSUInteger targetSide;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)asModification;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperationIdentifier:(id)arg0 sourceItem:(id)arg1 targetItemIdentifier:(id)arg2 targetItemBaseVersion:(id)arg3 changedFields:(NSUInteger)arg4 domainVersion:(id)arg5 rawFields:(NSInteger)arg6 snapshotVersion:(NSInteger)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif