// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSHEREDITARYGRANT_H
#define RBSHEREDITARYGRANT_H

@class NSArray, NSString;
@protocol OS_xpc_object;


#import "RBSGrant.h"

@interface RBSHereditaryGrant : RBSGrant

@property (readonly, nonatomic) NSArray *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment; // ivar: _encodedEndowment
@property (readonly, copy, nonatomic) NSString *endowmentNamespace; // ivar: _endowmentNamespace
@property (readonly, copy, nonatomic) NSString *sourceEnvironment; // ivar: _sourceEnvironment


+(id)grantWithNamespace:(id)arg0 endowment:(id)arg1 attributes:(id)arg2 ;
+(id)grantWithNamespace:(id)arg0 sourceEnvironment:(id)arg1 attributes:(id)arg2 ;
+(id)grantWithNamespace:(id)arg0 sourceEnvironment:(id)arg1 endowment:(id)arg2 attributes:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif