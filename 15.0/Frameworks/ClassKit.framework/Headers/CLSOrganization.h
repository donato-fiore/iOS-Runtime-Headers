// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSORGANIZATION_H
#define CLSORGANIZATION_H

@class NSString, NSArray, NSPersonNameComponents;
@protocol CLSContactsSearchable;


#import "CLSObject.h"

@interface CLSOrganization : CLSObject <CLSContactsSearchable>



@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSArray *emailDomains; // ivar: _emailDomains
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSArray *locationIDs; // ivar: _locationIDs
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSInteger)typeFromString:(id)arg0 ;
+(id)_propertyNames;
+(id)stringForType:(NSInteger)arg0 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrganizationID:(id)arg0 type:(NSInteger)arg1 name:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif