// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLBEACONIDENTITYCONSTRAINT_H
#define CLBEACONIDENTITYCONSTRAINT_H

@class NSUUID, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLBeaconIdentityConstraint : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSNumber *major; // ivar: _major
@property (readonly, copy, nonatomic) NSNumber *minor; // ivar: _minor


+(BOOL)supportsSecureCoding;
+(id)any;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithUUID:(id)arg0 major:(id)arg1 minor:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 major:(unsigned short)arg1 ;
-(id)initWithUUID:(id)arg0 major:(unsigned short)arg1 minor:(unsigned short)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif