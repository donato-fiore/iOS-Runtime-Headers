// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKASMCONCRETEROSTER_H
#define CRKASMCONCRETEROSTER_H

@class NSSet, NSArray, NSString;
@protocol CRKASMRoster, CRKASMOrganization, CRKASMUser;

#import <Foundation/Foundation.h>

#import "CRKASMCertificateVendor.h"

@interface CRKASMConcreteRoster : NSObject <CRKASMRoster>



@property (readonly, copy, nonatomic) NSSet *allTrustedUserCertificates;
@property (readonly, nonatomic) CRKASMCertificateVendor *certificateVendor; // ivar: _certificateVendor
@property (readonly, copy, nonatomic) NSArray *courses; // ivar: _courses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CRKASMOrganization> *organization; // ivar: _organization
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CRKASMUser> *user; // ivar: _user


-(BOOL)isEqual:(id)arg0 ;
-(id)allTrustedUserIdentifiers;
-(id)initWithOrganization:(id)arg0 user:(id)arg1 courses:(id)arg2 certificateVendor:(id)arg3 ;


@end


#endif