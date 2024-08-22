// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSTERMINATECONTEXT_H
#define RBSTERMINATECONTEXT_H

@class NSDictionary, NSArray, NSString;
@protocol RBSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RBSTerminateContext : NSObject <RBSXPCSecureCoding, NSCopying>



@property (copy, nonatomic) NSDictionary *additionalPayload; // ivar: _additionalPayload
@property (copy, nonatomic) NSArray *attributes; // ivar: _attributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger exceptionCode; // ivar: _exceptionCode
@property (nonatomic) unsigned int exceptionDomain; // ivar: _exceptionDomain
@property (copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned char maximumTerminationResistance; // ivar: _maximumTerminationResistance
@property (nonatomic) BOOL preventIfBeingDebugged; // ivar: _preventIfBeingDebugged
@property (nonatomic) NSUInteger reportType; // ivar: _reportType
@property (readonly, nonatomic) BOOL shouldTerminatePlugIns;
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
+(id)defaultContextWithExplanation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithExplanation:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif