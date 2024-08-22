// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTFINGERPRINT_H
#define RTFINGERPRINT_H

@class NSArray, NSUUID, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTFingerprint : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *accessPoints; // ivar: _accessPoints
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger settledState; // ivar: _settledState
@property (readonly, nonatomic) NSDate *start; // ivar: _start


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 settledState:(NSUInteger)arg1 start:(id)arg2 accessPoints:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif