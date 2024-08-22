// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKFITNESSMACHINE_H
#define _HKFITNESSMACHINE_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKDevice.h"

@interface _HKFitnessMachine : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger activityType; // ivar: _activityType
@property (readonly, nonatomic) NSString *brand; // ivar: _brand
@property (readonly, nonatomic) HKDevice *device; // ivar: _device
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 identifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif