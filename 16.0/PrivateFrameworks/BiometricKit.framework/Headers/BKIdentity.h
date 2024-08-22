// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKIDENTITY_H
#define BKIDENTITY_H

@class NSDate, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "BKDevice.h"

@interface BKIdentity : NSObject

@property (nonatomic) BOOL canAddPeriocularEnrollment; // ivar: _canAddPeriocularEnrollment
@property (retain, nonatomic) NSDate *creationTime; // ivar: _creationTime
@property (retain, nonatomic) BKDevice *device; // ivar: _device
@property (nonatomic) BOOL hasPeriocularEnrollment; // ivar: _hasPeriocularEnrollment
@property (nonatomic) BOOL hasPeriocularEnrollmentWithGlasses; // ivar: _hasPeriocularEnrollmentWithGlasses
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger secondaryPeriocularEnrollments; // ivar: _secondaryPeriocularEnrollments
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) unsigned int userID; // ivar: _userID
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)identity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdentity:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithServerIdentity:(id)arg0 device:(id)arg1 ;
-(id)serverIdentity;


@end


#endif