// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCOMPONENTINTERACTIONCONTEXTPROVIDER_H
#define SXCOMPONENTINTERACTIONCONTEXTPROVIDER_H

@class NSString;
@protocol SXInteractionContextProviding, SXActionManager, SXComponentInteractionHandlerManager;

#import <Foundation/Foundation.h>

#import "SXComponentInteraction.h"

@interface SXComponentInteractionContextProvider : NSObject <SXInteractionContextProviding>



@property (readonly, nonatomic) NSObject<SXActionManager> *actionManager; // ivar: _actionManager
@property (readonly, nonatomic) NSObject<SXComponentInteractionHandlerManager> *componentInteractionHandlerManager; // ivar: _componentInteractionHandlerManager
@property (weak, nonatomic) SXComponentInteraction *currentInteraction; // ivar: _currentInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)contextMenuAtLocation:(struct CGPoint )arg0 viewport:(id)arg1 ;
-(id)initWithComponentInteractionHandlerManager:(id)arg0 actionManager:(id)arg1 ;
-(id)targetedPreviewAtLocation:(struct CGPoint )arg0 viewport:(id)arg1 ;
-(id)toolTipAtLocation:(struct CGPoint )arg0 viewport:(id)arg1 boundingRect:(struct CGRect *)arg2 ;
-(void)commitPreviewViewController:(id)arg0 ;


@end


#endif