// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERASIGNIFICANTEVENT_H
#define HMCAMERASIGNIFICANTEVENT_H

@class NSArray, NSUUID, NSDate, NSString;
@protocol HMFObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMFaceClassification.h"

@interface HMCameraSignificantEvent : NSObject <HMFObject, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSUUID *cameraProfileUUID; // ivar: _cameraProfileUUID
@property (readonly) BOOL canAskForUserFeedback;
@property (readonly) NSUInteger confidenceLevel; // ivar: _confidenceLevel
@property (readonly, copy) NSDate *dateOfOccurrence; // ivar: _dateOfOccurrence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMFaceClassification *faceClassification; // ivar: _faceClassification
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSUInteger reason; // ivar: _reason
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 reason:(NSUInteger)arg1 dateOfOccurrence:(id)arg2 confidenceLevel:(NSUInteger)arg3 cameraProfileUUID:(id)arg4 faceClassification:(id)arg5 ;
-(id)initWithUniqueIdentifier:(id)arg0 reason:(NSUInteger)arg1 dateOfOccurrence:(id)arg2 confidenceLevel:(NSUInteger)arg3 faceClassification:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif