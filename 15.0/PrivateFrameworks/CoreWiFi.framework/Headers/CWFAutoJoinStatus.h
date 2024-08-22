// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFAUTOJOINSTATUS_H
#define CWFAUTOJOINSTATUS_H

@class NSUUID, NSDate, NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFAutoJoinStatus : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSDate *endedAt; // ivar: _endedAt
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (copy, nonatomic) NSArray *joinAttempts; // ivar: _joinAttempts
@property (nonatomic) BOOL result; // ivar: _result
@property (copy, nonatomic) NSDate *startedAt; // ivar: _startedAt
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSInteger trigger; // ivar: _trigger


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAutoJoinStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif