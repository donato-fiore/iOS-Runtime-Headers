// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COCLUSTERROLE_H
#define COCLUSTERROLE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface COClusterRole : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags


+(BOOL)supportsSecureCoding;
+(id)roleForCoordinator;
+(id)roleForUnknown;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRole:(id)arg0 ;
-(BOOL)isPrimary;
-(BOOL)isUnknown;
-(BOOL)satisfiesRole:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRoleFlags:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif