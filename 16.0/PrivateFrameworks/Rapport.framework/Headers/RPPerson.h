// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPPERSON_H
#define RPPERSON_H

@class NSString, NSMutableDictionary, NSArray, CURangingMeasurement;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RPPerson : NSObject <NSSecureCoding>



@property (readonly, nonatomic) int activityLevel; // ivar: _activityLevel
@property (readonly, copy, nonatomic) NSString *contactID; // ivar: _contactID
@property (retain, nonatomic) NSMutableDictionary *deviceDict; // ivar: _deviceDict
@property (readonly, copy, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly, nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) int proximity; // ivar: _proximity
@property (retain) CURangingMeasurement *relativeLocation; // ivar: _relativeLocation


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)_updateDeviceDerivedInfo;
-(unsigned int)removeRPDevice:(id)arg0 ;
-(unsigned int)updateWithRPDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif