// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COCLUSTERROLE_H
#define COCLUSTERROLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface COClusterRole : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRole:(id)arg0 ;
-(BOOL)isPrimary;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFlags:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif