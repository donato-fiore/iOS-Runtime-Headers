// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPBEACONROLE_H
#define SPBEACONROLE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPBeaconRole : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *role; // ivar: _role
@property (copy, nonatomic) NSString *roleEmoji; // ivar: _roleEmoji
@property (nonatomic) NSInteger roleId; // ivar: _roleId


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRoleId:(NSInteger)arg0 role:(id)arg1 roleEmoji:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif