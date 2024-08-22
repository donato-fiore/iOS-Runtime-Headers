// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPSAFELOCATION_H
#define SPSAFELOCATION_H

@class NSSet, NSUUID, CLLocation, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SPSafeLocation : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CGFloat altitude;
@property (nonatomic) NSInteger approvalState; // ivar: _approvalState
@property (copy, nonatomic) NSSet *associatedBeacons; // ivar: _associatedBeacons
@property (readonly, nonatomic) CGFloat course;
@property (readonly, nonatomic) CGFloat courseAccuracy;
@property (readonly, nonatomic) CGFloat horizontalAccuracy;
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat latitude;
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) CGFloat longitude;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CGFloat speed;
@property (readonly, nonatomic) CGFloat speedAccuracy;
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) CGFloat verticalAccuracy;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSInteger)arg1 name:(id)arg2 location:(id)arg3 associatedBeacons:(id)arg4 approvalState:(NSInteger)arg5 ;
-(id)initWithType:(NSInteger)arg0 name:(id)arg1 location:(id)arg2 approvalState:(NSInteger)arg3 ;
-(id)mutableSafeLocation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif