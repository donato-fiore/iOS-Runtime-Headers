// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCONTRIBUTOR_H
#define HKCONTRIBUTOR_H

@class NSUUID, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKContributor : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (readonly, copy, nonatomic) NSString *callerID; // ivar: _callerID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithUUID:(id)arg0 appleID:(id)arg1 callerID:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif