// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCHAINABLEMODIFIEREVENT_H
#define SBCHAINABLEMODIFIEREVENT_H

@class NSString;
@protocol BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface SBChainableModifierEvent : NSObject <BSDescriptionProviding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isHandled) BOOL handled; // ivar: _handled
@property (readonly, copy, nonatomic) NSString *handledReason; // ivar: _handledReason
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)loggingCategory;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)unhandledCopy;
-(void)handleWithReason:(id)arg0 ;


@end


#endif