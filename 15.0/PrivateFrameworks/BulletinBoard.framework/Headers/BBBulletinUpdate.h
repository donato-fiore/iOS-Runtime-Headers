// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBBULLETINUPDATE_H
#define BBBULLETINUPDATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBBulletin.h"

@interface BBBulletinUpdate : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) BBBulletin *bulletin; // ivar: _bulletin
@property (readonly, nonatomic) NSUInteger feeds; // ivar: _feeds


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBulletin:(id)arg0 feeds:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)typeDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif