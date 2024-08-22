// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEMBEDDABLEACTIONUSERINTERFACE_H
#define WFEMBEDDABLEACTIONUSERINTERFACE_H

@class UIViewController;


#import "WFActionUserInterface.h"

@interface WFEmbeddableActionUserInterface : WFActionUserInterface

@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController


-(BOOL)prefersModalPresentation;
-(BOOL)presentContent:(id)arg0 completion:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)presentContent:(id)arg0 ;


@end


#endif