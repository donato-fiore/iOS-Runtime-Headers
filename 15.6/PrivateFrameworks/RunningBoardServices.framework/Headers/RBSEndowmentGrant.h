// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSENDOWMENTGRANT_H
#define RBSENDOWMENTGRANT_H

@class NSString;
@protocol OS_xpc_object;


#import "RBSGrant.h"

@interface RBSEndowmentGrant : RBSGrant

@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment; // ivar: _encodedEndowment
@property (readonly, copy, nonatomic) NSString *endowmentNamespace; // ivar: _endowmentNamespace


+(id)grantWithNamespace:(id)arg0 endowment:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif