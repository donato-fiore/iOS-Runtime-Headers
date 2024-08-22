// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSJETSAMPRIORITYGRANT_H
#define RBSJETSAMPRIORITYGRANT_H



#import "RBSGrant.h"

@interface RBSJetsamPriorityGrant : RBSGrant

@property (readonly, nonatomic) NSUInteger band; // ivar: _band


+(BOOL)supportsRBSXPCSecureCoding;
+(id)grantWithBackgroundPriority;
+(id)grantWithBand:(NSUInteger)arg0 ;
+(id)grantWithForegroundPriority;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif