// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSCPUACCESSGRANT_H
#define RBSCPUACCESSGRANT_H



#import "RBSGrant.h"

@interface RBSCPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role; // ivar: _role


+(id)grant;
+(id)grantUserInitiated;
+(id)grantWithRole:(unsigned char)arg0 ;
+(id)grantWithUserInteractivity;
+(id)grantWithUserInteractivityAndFocus;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif