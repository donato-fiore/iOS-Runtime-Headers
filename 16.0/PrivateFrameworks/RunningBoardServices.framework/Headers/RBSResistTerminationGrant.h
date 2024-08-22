// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSRESISTTERMINATIONGRANT_H
#define RBSRESISTTERMINATIONGRANT_H



#import "RBSGrant.h"

@interface RBSResistTerminationGrant : RBSGrant

@property (readonly, nonatomic) unsigned char resistance; // ivar: _resistance


+(id)grantWithResistance:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif