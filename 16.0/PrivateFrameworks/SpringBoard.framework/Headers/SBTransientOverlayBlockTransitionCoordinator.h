// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRANSIENTOVERLAYBLOCKTRANSITIONCOORDINATOR_H
#define SBTRANSIENTOVERLAYBLOCKTRANSITIONCOORDINATOR_H

@class NSString;
@protocol SBTransientOverlayTransitionCoordinating;

#import <Foundation/Foundation.h>


@interface SBTransientOverlayBlockTransitionCoordinator : NSObject <SBTransientOverlayTransitionCoordinating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *finalizeTransitionHandler; // ivar: _finalizeTransitionHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *startTransitionHandler; // ivar: _startTransitionHandler
@property (readonly) Class superclass;


-(void)finalizeTransitionWithContextProvider:(id)arg0 ;
-(void)startTransitionWithContextProvider:(id)arg0 ;


@end


#endif