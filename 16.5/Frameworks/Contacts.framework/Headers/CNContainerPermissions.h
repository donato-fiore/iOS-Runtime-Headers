// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTAINERPERMISSIONS_H
#define CNCONTAINERPERMISSIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL canCreateContacts; // ivar: _canCreateContacts
@property (readonly, nonatomic) BOOL canCreateGroups; // ivar: _canCreateGroups
@property (readonly, nonatomic) BOOL canDeleteContacts; // ivar: _canDeleteContacts


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCanCreateContacts:(BOOL)arg0 canDeleteContacts:(BOOL)arg1 canCreateGroups:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif