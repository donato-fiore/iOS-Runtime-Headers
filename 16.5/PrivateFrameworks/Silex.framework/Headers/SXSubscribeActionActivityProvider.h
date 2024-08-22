// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXSUBSCRIBEACTIONACTIVITYPROVIDER_H
#define SXSUBSCRIBEACTIONACTIVITYPROVIDER_H

@class NSString;
@protocol SXActionActivityProvider, SXActionManager, SXSubscribeActionHandler, SXViewControllerPresenting;

#import <Foundation/Foundation.h>


@interface SXSubscribeActionActivityProvider : NSObject <SXActionActivityProvider>



@property (readonly, weak, nonatomic) NSObject<SXActionManager> *actionManager; // ivar: _actionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXSubscribeActionHandler> *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXViewControllerPresenting> *viewControllerPresenting; // ivar: _viewControllerPresenting


-(id)activityGroupForAction:(id)arg0 ;
-(id)initWithHandler:(id)arg0 viewControllerPresenting:(id)arg1 actionManager:(id)arg2 ;


@end


#endif