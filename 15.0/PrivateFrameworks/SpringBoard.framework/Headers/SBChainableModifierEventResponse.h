// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCHAINABLEMODIFIEREVENTRESPONSE_H
#define SBCHAINABLEMODIFIEREVENTRESPONSE_H

@class NSMutableArray, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBChainableModifierEventResponse : NSObject <BSDescriptionProviding>

 {
    NSMutableArray *_childResponses;
    BOOL _consumed;
    id *_validator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL requiresExplicitTransaction; // ivar: _requiresExplicitTransaction
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)newEventResponse;
+(id)responseByAppendingResponse:(id)arg0 toResponse:(id)arg1 ;
-(id)_initWithChildResponses:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)loggingCategory;
-(id)responseByTransformingResponseWithTransformer:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addChildResponse:(id)arg0 ;
-(void)addChildResponses:(id)arg0 ;
-(void)consumeWithReason:(id)arg0 ;
-(void)enumerateChildResponsesUsingBlock:(id)arg0 ;
-(void)enumerateResponseTreeUsingBlock:(id)arg0 ;
// -(void)enumerateResponseTreeUsingBlock:(id)arg0 stop:(unk)arg1  ;
-(void)insertChildResponse:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif