// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSPROCESSINSTANCE_H
#define RBSPROCESSINSTANCE_H

@class NSString;
@protocol RBSProcessMatching, RBSProcessIdentifier, NSCopying, RBSXPCSecureCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RBSProcessIdentifier.h"
#import "RBSProcessIdentity.h"

@interface RBSProcessInstance : NSObject <RBSProcessMatching, RBSProcessIdentifier, NSCopying, RBSXPCSecureCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RBSProcessIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) RBSProcessIdentity *identity; // ivar: _identity
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)instanceWithIdentifier:(id)arg0 identity:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(id)copyWithAuid:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)processPredicate;
-(int)rbs_pid;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif