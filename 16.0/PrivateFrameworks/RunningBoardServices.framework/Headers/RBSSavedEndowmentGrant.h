// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSSAVEDENDOWMENTGRANT_H
#define RBSSAVEDENDOWMENTGRANT_H

@class NSString;


#import "RBSGrant.h"

@interface RBSSavedEndowmentGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *endowmentNamespace; // ivar: _endowmentNamespace
@property (readonly, nonatomic) NSString *key; // ivar: _key


+(id)grantWithNamespace:(id)arg0 key:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif