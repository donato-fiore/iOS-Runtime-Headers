// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRSUICLUSTERZOOMBSACTIONSHANDLER_H
#define CRSUICLUSTERZOOMBSACTIONSHANDLER_H

@class NSString;
@protocol _UISceneBSActionHandler, CRSUIClusterZoomActionDelegate;

#import <Foundation/Foundation.h>


@interface CRSUIClusterZoomBSActionsHandler : NSObject <_UISceneBSActionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRSUIClusterZoomActionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_respondToActions:(id)arg0 forFBSScene:(id)arg1 inUIScene:(id)arg2 fromTransitionContext:(id)arg3 ;
-(id)initWithDelegate:(id)arg0 ;


@end


#endif