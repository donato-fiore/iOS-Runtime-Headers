// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSSEARCHSPECIFICATION_H
#define CLSSEARCHSPECIFICATION_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CLSAdminRequestor.h"

@interface CLSSearchSpecification : NSObject <NSCopying, NSSecureCoding>



@property (copy) CLSAdminRequestor *adminRequestor; // ivar: _adminRequestor
@property (nonatomic) NSUInteger behaviors; // ivar: _behaviors
@property (readonly, copy) NSArray *classLocationIDs;
@property (copy, nonatomic) NSArray *classLocationIDs; // ivar: _classLocationIDs
@property (copy) NSArray *classSortDescriptors;
@property (copy) NSArray *classSortDescriptors; // ivar: _classSortDescriptors
@property (nonatomic) NSUInteger compareOptions; // ivar: _compareOptions
@property BOOL includeUnsearchablePersons;
@property BOOL includeUnsearchablePersons; // ivar: _includeUnsearchablePersons
@property (readonly, copy) NSArray *locationPersonIDs;
@property (copy) NSArray *locationPersonIDs; // ivar: _locationPersonIDs
@property (copy) NSArray *locationSortDescriptors;
@property (copy) NSArray *locationSortDescriptors; // ivar: _locationSortDescriptors
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy) NSArray *organizationSortDescriptors;
@property (copy) NSArray *organizationSortDescriptors; // ivar: _organizationSortDescriptors
@property (readonly, copy) NSArray *personLocationIDs;
@property (copy) NSArray *personLocationIDs; // ivar: _personLocationIDs
@property (copy) NSArray *personSortDescriptors;
@property (copy) NSArray *personSortDescriptors; // ivar: _personSortDescriptors
@property (readonly, copy) NSArray *prohibitedLocationPersonIDs;
@property (copy) NSArray *prohibitedLocationPersonIDs; // ivar: _prohibitedLocationPersonIDs
@property (readonly, copy) NSString *prohibitedLocationPrivilege;
@property (copy) NSString *prohibitedLocationPrivilege; // ivar: _prohibitedLocationPrivilege
@property (readonly, copy) NSString *prohibitedPrivilege;
@property (copy) NSString *prohibitedPrivilege; // ivar: _prohibitedPrivilege
@property (readonly, copy) NSArray *prohibitedPrivilegeLocationIDs;
@property (copy) NSArray *prohibitedPrivilegeLocationIDs; // ivar: _prohibitedPrivilegeLocationIDs
@property (readonly, copy) NSArray *requiredClassMemberClassIDs;
@property (copy) NSArray *requiredClassMemberClassIDs; // ivar: _requiredClassMemberClassIDs
@property (readonly) NSUInteger requiredClassMemberRole;
@property NSUInteger requiredClassMemberRole; // ivar: _requiredClassMemberRole
@property (readonly, copy) NSArray *requiredLocationPersonIDs;
@property (copy) NSArray *requiredLocationPersonIDs; // ivar: _requiredLocationPersonIDs
@property (readonly, copy) NSString *requiredLocationPrivilege;
@property (copy) NSString *requiredLocationPrivilege; // ivar: _requiredLocationPrivilege
@property (readonly) NSInteger requiredLocationRoleType;
@property NSInteger requiredLocationRoleType; // ivar: _requiredLocationRoleType
@property (readonly, copy) NSString *requiredOrganizationEmailDomain;
@property (copy) NSString *requiredOrganizationEmailDomain; // ivar: _requiredOrganizationEmailDomain
@property (readonly, copy) NSString *requiredPrivilege;
@property (copy) NSString *requiredPrivilege; // ivar: _requiredPrivilege
@property (readonly, copy) NSArray *requiredPrivilegeLocationIDs;
@property (copy) NSArray *requiredPrivilegeLocationIDs; // ivar: _requiredPrivilegeLocationIDs
@property (readonly, copy) NSString *requiredRoleID;
@property (copy) NSString *requiredRoleID; // ivar: _requiredRoleID
@property (readonly) NSInteger requiredRoleType;
@property NSInteger requiredRoleType; // ivar: _requiredRoleType
@property (copy) NSString *searchString; // ivar: _searchString
@property (copy, nonatomic) NSArray *searchTokens; // ivar: _searchTokens


+(BOOL)supportsSecureCoding;
+(id)newlineAnchoredPredicateValueForToken:(id)arg0 ;
-(BOOL)canUseClassPredicate;
-(BOOL)canUsePersonPredicate;
-(BOOL)hasLocationConstraints;
-(BOOL)hasPersonConstraints;
-(BOOL)isClassMemberSearch;
-(BOOL)isClassSearch;
-(BOOL)isLocationSearch;
-(BOOL)isOrganizationSearch;
-(BOOL)isPersonSearch;
-(BOOL)isValid:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)requiresDashboardEntitlement;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 behaviors:(NSUInteger)arg1 ;
-(id)initWithOptions:(NSUInteger)arg0 behaviors:(NSUInteger)arg1 searchString:(id)arg2 ;
-(id)initWithOptions:(NSUInteger)arg0 behaviors:(NSUInteger)arg1 searchString:(id)arg2 requestor:(id)arg3 ;
-(id)predicate;
-(id)predicateForClasses;
-(id)predicateForPersons;
-(id)predicateForPersonsWithObjectIDs:(id)arg0 ;
-(id)predicateForPersonsWithPersonIDs:(id)arg0 ;
-(id)predicateUsingSubPredicateBlock:(id)arg0 ;
-(id)predicateWithLocationIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prohibitPrivilege:(id)arg0 atLocationIDs:(id)arg1 ;
-(void)prohibitPrivilege:(id)arg0 onPersonIDs:(id)arg1 ;
-(void)requireClassMemberRole:(NSUInteger)arg0 forClassIDs:(id)arg1 ;
-(void)requirePrivilege:(id)arg0 atLocationIDs:(id)arg1 ;
-(void)requirePrivilege:(id)arg0 onPersonIDs:(id)arg1 ;
-(void)requireRole:(id)arg0 atLocationIDs:(id)arg1 ;
-(void)requireRoleType:(NSInteger)arg0 atLocationIDs:(id)arg1 ;
-(void)requireRoleType:(NSInteger)arg0 onPersonIDs:(id)arg1 ;
-(void)restrictToClassesAtLocationIDs:(id)arg0 ;
-(void)restrictToOrganizationsMatchingEmailDomain:(id)arg0 ;


@end


#endif