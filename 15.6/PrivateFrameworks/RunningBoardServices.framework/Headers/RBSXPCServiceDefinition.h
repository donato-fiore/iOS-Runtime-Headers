// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSXPCSERVICEDEFINITION_H
#define RBSXPCSERVICEDEFINITION_H

@class NSString;
@protocol RBSXPCSecureCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RBSXPCServiceDefinition : NSObject <RBSXPCSecureCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger scope; // ivar: _scope
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant


+(BOOL)supportsRBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)definitionWithIdentifier:(id)arg0 variant:(NSInteger)arg1 scope:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif