// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DACDEVICEROLE_H
#define DACDEVICEROLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DACDeviceRole : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags


+(BOOL)supportsSecureCoding;
+(id)unknownRole;
-(BOOL)_isEqualToRole:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPrimary;
-(BOOL)isUnknown;
-(BOOL)satisfiesRole:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithRoleFlags:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif