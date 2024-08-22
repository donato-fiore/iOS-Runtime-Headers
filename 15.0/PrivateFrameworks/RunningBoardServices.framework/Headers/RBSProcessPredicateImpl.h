// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSPROCESSPREDICATEIMPL_H
#define RBSPROCESSPREDICATEIMPL_H

@class NSString;
@protocol RBSProcessMatching, RBSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface RBSProcessPredicateImpl : NSObject <RBSProcessMatching, RBSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)matchesProcess:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)processIdentifier;
-(id)processPredicate;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif