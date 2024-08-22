// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMCONCRETETRUSTEDUSER_H
#define CRKASMCONCRETETRUSTEDUSER_H

@class NSString, NSSet;
@protocol CRKASMTrustedUser, CRKASMNameComponents;


#import "CRKASMConcreteUser.h"
#import "CRKASMCertificateVendor.h"

@interface CRKASMConcreteTrustedUser : CRKASMConcreteUser <CRKASMTrustedUser>



@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, nonatomic) CRKASMCertificateVendor *certificateVendor; // ivar: _certificateVendor
@property (readonly, copy, nonatomic) NSSet *certificates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<CRKASMNameComponents> *nameComponents;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConcreteTrustedUser:(id)arg0 ;
-(id)initWithBackingPerson:(id)arg0 certificateVendor:(id)arg1 ;


@end


#endif