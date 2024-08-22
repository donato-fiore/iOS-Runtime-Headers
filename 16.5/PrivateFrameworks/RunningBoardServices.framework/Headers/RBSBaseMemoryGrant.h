// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSBASEMEMORYGRANT_H
#define RBSBASEMEMORYGRANT_H

@class NSString;


#import "RBSGrant.h"

@interface RBSBaseMemoryGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) unsigned char strength; // ivar: _strength


+(BOOL)supportsRBSXPCSecureCoding;
+(id)grantWithActiveLimit;
+(id)grantWithCategory:(id)arg0 strength:(unsigned char)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif