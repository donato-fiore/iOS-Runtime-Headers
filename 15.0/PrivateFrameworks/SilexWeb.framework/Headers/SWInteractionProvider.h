// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWINTERACTIONPROVIDER_H
#define SWINTERACTIONPROVIDER_H

@class NSMutableArray, NSString;
@protocol SWMessageHandler, SWInteractionProvider, SWInteraction, SWInteractionFactory, SWLogger;

#import <Foundation/Foundation.h>


@interface SWInteractionProvider : NSObject <SWMessageHandler, SWInteractionProvider>



@property (readonly, nonatomic) NSMutableArray *blocks; // ivar: _blocks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWInteraction> *interaction; // ivar: _interaction
@property (readonly, nonatomic) NSObject<SWInteractionFactory> *interactionFactory; // ivar: _interactionFactory
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly) Class superclass;


-(id)initWithMessageHandlerManager:(id)arg0 documentStateProvider:(id)arg1 interactionFactory:(id)arg2 logger:(id)arg3 ;
-(void)didReceiveMessage:(id)arg0 securityOrigin:(id)arg1 ;
-(void)onChange:(id)arg0 ;


@end


#endif