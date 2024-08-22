// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCALLINGSTATUSDOMAINCALLDESCRIPTOR_H
#define STCALLINGSTATUSDOMAINCALLDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface STCallingStatusDomainCallDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding>



@property (readonly, nonatomic) NSUInteger callState; // ivar: _callState
@property (readonly, nonatomic) NSUInteger callType; // ivar: _callType
@property (readonly, nonatomic) NSUInteger copresenceActivityType; // ivar: _copresenceActivityType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)audioCallDescriptorWithState:(NSUInteger)arg0 ;
+(id)copresenceCallDescriptorWithActivityType:(NSUInteger)arg0 ;
+(id)videoCallDescriptorWithState:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCallType:(NSUInteger)arg0 callState:(NSUInteger)arg1 copresenceActivityType:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif