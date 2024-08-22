// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSGPUACCESSGRANT_H
#define RBSGPUACCESSGRANT_H



#import "RBSGrant.h"

@interface RBSGPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role; // ivar: _role


+(id)grant;
+(id)grantWithRole:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithRole:(unsigned char)arg0 ;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif