// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LKCLASSCONFIGURATION_H
#define LKCLASSCONFIGURATION_H

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSData;
@protocol LKClassConfigurationProviding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LKClassConfiguration : NSObject <LKClassConfigurationProviding, NSSecureCoding>



@property (retain, nonatomic) NSArray *classGroups; // ivar: _classGroups
@property (retain) NSDictionary *classRosterInformationDictionary; // ivar: _classRosterInformationDictionary
@property (readonly, copy, nonatomic) NSArray *classes; // ivar: _classes
@property (retain) NSMutableDictionary *classesByClassGroupName; // ivar: _classesByClassGroupName
@property (retain) NSMutableDictionary *classesByClassID; // ivar: _classesByClassID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *instructors; // ivar: _instructors
@property (readonly, nonatomic) NSData *payloadCertificatePersistentID; // ivar: _payloadCertificatePersistentID
@property (readonly, copy, nonatomic) NSString *schoolName; // ivar: _schoolName
@property (copy, nonatomic) NSArray *students; // ivar: _students
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *usersByUsername; // ivar: _usersByUsername
@property (retain) NSMutableDictionary *usersWithAppleIDByIdentifier; // ivar: _usersWithAppleIDByIdentifier


+(BOOL)supportsSecureCoding;
-(id)classInfoForClassID:(id)arg0 ;
-(id)dictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithPropertyList:(id)arg0 ;
-(id)studentForStudentIdentifier:(id)arg0 ;
-(id)studentForStudentIdentifier:(id)arg0 inClass:(id)arg1 ;
-(id)studentForUsername:(id)arg0 ;
-(id)studentForUsername:(id)arg0 inClass:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif