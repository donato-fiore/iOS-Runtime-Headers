// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKASMCONCRETECOURSE_H
#define CRKASMCONCRETECOURSE_H

@class NSSet, NSString, NSDate, DMFControlGroupIdentifier, NSArray;
@protocol CRKASMCourse, CRKIdentity, CRKASMLocation;

#import <Foundation/Foundation.h>

#import "CRKASMCertificateVendor.h"
#import "CRKASMIdentityVendor.h"

@interface CRKASMConcreteCourse : NSObject <CRKASMCourse>



@property (readonly, copy, nonatomic) NSSet *allTrustedUserCertificates;
@property (readonly, copy, nonatomic) NSString *backingClassObjectID; // ivar: _backingClassObjectID
@property (readonly, nonatomic) CRKASMCertificateVendor *certificateVendor; // ivar: _certificateVendor
@property (readonly, nonatomic) NSUInteger color; // ivar: _color
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (readonly, copy, nonatomic) DMFControlGroupIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<CRKIdentity> *identity;
@property (readonly, nonatomic) CRKASMIdentityVendor *identityVendor; // ivar: _identityVendor
@property (readonly, nonatomic) NSObject<CRKASMLocation> *location; // ivar: _location
@property (readonly, nonatomic) NSUInteger mascot; // ivar: _mascot
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSSet *trustedUserIdentifiers; // ivar: _trustedUserIdentifiers
@property (readonly, copy, nonatomic) NSArray *trustedUsers; // ivar: _trustedUsers
@property (readonly, copy, nonatomic) NSArray *users; // ivar: _users


+(id)courseNameForClass:(id)arg0 ;
+(id)trustedUserIdentifierForTrustedUsers:(id)arg0 ;
+(id)trustedUsersFromPersons:(id)arg0 environment:(id)arg1 ;
+(id)usersFromPersons:(id)arg0 environment:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBackingClass:(id)arg0 location:(id)arg1 persons:(id)arg2 trustedPersons:(id)arg3 identityVendor:(id)arg4 manageableLocationIDs:(id)arg5 environment:(id)arg6 ;


@end


#endif