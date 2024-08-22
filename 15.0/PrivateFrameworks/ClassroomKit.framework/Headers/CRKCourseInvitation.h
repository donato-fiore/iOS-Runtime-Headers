// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCOURSEINVITATION_H
#define CRKCOURSEINVITATION_H

@class NSArray, NSString, DMFControlGroupIdentifier, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKCourseInvitation : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *anchorCertificateDatas; // ivar: _anchorCertificateDatas
@property (readonly, nonatomic) NSUInteger courseColorType; // ivar: _courseColorType
@property (readonly, copy, nonatomic) NSString *courseDescription; // ivar: _courseDescription
@property (readonly, copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // ivar: _courseIdentifier
@property (readonly, nonatomic) NSUInteger courseMascotType; // ivar: _courseMascotType
@property (readonly, copy, nonatomic) NSString *courseName; // ivar: _courseName
@property (readonly, copy, nonatomic) NSData *instructorImageData; // ivar: _instructorImageData
@property (readonly, copy, nonatomic) NSString *instructorName; // ivar: _instructorName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCourseIdentifier:(id)arg0 courseName:(id)arg1 courseDescription:(id)arg2 courseMascotType:(NSUInteger)arg3 courseColorType:(NSUInteger)arg4 instructorName:(id)arg5 anchorCertificateDatas:(id)arg6 ;
-(id)initWithCourseIdentifier:(id)arg0 courseName:(id)arg1 courseDescription:(id)arg2 courseMascotType:(NSUInteger)arg3 courseColorType:(NSUInteger)arg4 instructorName:(id)arg5 anchorCertificates:(id)arg6 ;
-(id)initWithCourseIdentifier:(id)arg0 courseName:(id)arg1 courseDescription:(id)arg2 courseMascotType:(NSUInteger)arg3 courseColorType:(NSUInteger)arg4 instructorName:(id)arg5 instructorImageData:(id)arg6 anchorCertificateDatas:(id)arg7 ;
-(id)initWithCourseIdentifier:(id)arg0 courseName:(id)arg1 courseDescription:(id)arg2 courseMascotType:(NSUInteger)arg3 courseColorType:(NSUInteger)arg4 instructorName:(id)arg5 instructorImageData:(id)arg6 anchorCertificates:(id)arg7 ;
-(id)initWithCourseIdentifier:(id)arg0 courseName:(id)arg1 courseDescription:(id)arg2 instructorName:(id)arg3 anchorCertificates:(id)arg4 ;
-(id)initWithCourseIdentifier:(id)arg0 courseName:(id)arg1 courseDescription:(id)arg2 instructorName:(id)arg3 instructorImageData:(id)arg4 anchorCertificates:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif