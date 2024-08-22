// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBEACON_H
#define PKBEACON_H

@class NSNumber, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKBeacon : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *major; // ivar: _major
@property (retain, nonatomic) NSNumber *minor; // ivar: _minor
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSUUID *proximityUUID; // ivar: _proximityUUID
@property (retain, nonatomic) NSString *relevantText; // ivar: _relevantText


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif