// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKINSTRUCTOR_H
#define CRKINSTRUCTOR_H

@class NSString, NSDictionary, NSData, DMFControlSessionIdentifier;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKInstructor : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowsStudentInitiatedDisconnection; // ivar: _allowsStudentInitiatedDisconnection
@property (copy, nonatomic) NSString *courseName; // ivar: _courseName
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (nonatomic) BOOL disallowsClassroomAirDropOverLocalNetwork; // ivar: _disallowsClassroomAirDropOverLocalNetwork
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (nonatomic, getter=isObservingStudentScreen) BOOL observingStudentScreen; // ivar: _observingStudentScreen
@property (copy, nonatomic) DMFControlSessionIdentifier *sessionIdentifier; // ivar: _sessionIdentifier
@property (copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInstructor:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif