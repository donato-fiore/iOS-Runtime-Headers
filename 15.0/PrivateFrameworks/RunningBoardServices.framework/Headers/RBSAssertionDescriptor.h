// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSASSERTIONDESCRIPTOR_H
#define RBSASSERTIONDESCRIPTOR_H

@class NSArray, NSString;
@protocol RBSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "RBSAssertionIdentifier.h"
#import "RBSTarget.h"

@interface RBSAssertionDescriptor : NSObject <RBSXPCSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *attributes; // ivar: _attributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) RBSAssertionIdentifier *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (copy, nonatomic) RBSTarget *target; // ivar: _target


+(BOOL)supportsRBSXPCSecureCoding;
+(id)descriptorWithIdentifier:(id)arg0 target:(id)arg1 explanation:(id)arg2 attributes:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif