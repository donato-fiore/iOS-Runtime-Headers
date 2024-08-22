// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPTESTINGCREATION_H
#define FPTESTINGCREATION_H

@class NSString;
@protocol NSFileProviderTestingCreation, NSFileProviderItem;


#import "FPTestingOperation.h"
#import "NSFileProviderDomainVersion.h"

@interface FPTestingCreation : FPTestingOperation <NSFileProviderTestingCreation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion; // ivar: _domainVersion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger snapshotVersion; // ivar: _snapshotVersion
@property (readonly, nonatomic) NSObject<NSFileProviderItem> *sourceItem; // ivar: _sourceItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger targetSide;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)asCreation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperationIdentifier:(id)arg0 sourceItem:(id)arg1 domainVersion:(id)arg2 snapshotVersion:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif