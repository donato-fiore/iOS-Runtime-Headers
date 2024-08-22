// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSINHERITANCE_H
#define RBSINHERITANCE_H

@class NSString;
@protocol RBSXPCSecureCoding, NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "RBSAssertionIdentifier.h"

@interface RBSInheritance : NSObject <RBSXPCSecureCoding, NSCopying>

 {
    NSUInteger _originatingAttributePath;
    NSUInteger _hash;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment; // ivar: _encodedEndowment
@property (readonly, copy, nonatomic) NSString *endowmentNamespace; // ivar: _endowmentNamespace
@property (readonly, nonatomic) NSString *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) RBSAssertionIdentifier *originatingIdentifier; // ivar: _originatingIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithNamespace:(id)arg0 environment:(id)arg1 encodedEndowment:(id)arg2 originatingIdentifier:(id)arg3 attributePath:(NSUInteger)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)endowment;
-(id)init;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif