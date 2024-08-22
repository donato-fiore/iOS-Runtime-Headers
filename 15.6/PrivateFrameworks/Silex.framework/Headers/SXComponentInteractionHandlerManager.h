// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTINTERACTIONHANDLERMANAGER_H
#define SXCOMPONENTINTERACTIONHANDLERMANAGER_H

@class NSString, NSMapTable;
@protocol SXComponentInteractionHandlerManager;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXComponentInteractionHandlerManager : NSObject <SXComponentInteractionHandlerManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *interactionHandlers; // ivar: _interactionHandlers
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport


-(id)componentViewForLocation:(struct CGPoint )arg0 ;
-(id)initWithViewport:(id)arg0 ;
-(id)interactionsForComponentView:(id)arg0 ;
-(id)interactionsForComponentView:(id)arg0 type:(NSUInteger)arg1 ;
-(void)addInteractionHandler:(id)arg0 componentView:(id)arg1 types:(NSUInteger)arg2 ;
-(void)removeInteractionHandler:(id)arg0 componentView:(id)arg1 ;
-(void)updateUserInteractionForComponentView:(id)arg0 ;


@end


#endif