// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDSUSER_H
#define PDSUSER_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PDSUser : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *userID; // ivar: _userID
@property (readonly, nonatomic) char userType; // ivar: _userType


+(BOOL)supportsSecureCoding;
+(id)userWithDSID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUser:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserID:(id)arg0 userType:(char)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif