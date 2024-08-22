// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCLOSEACTIONACTIVITYPROVIDER_H
#define SXCLOSEACTIONACTIVITYPROVIDER_H

@class NSString;
@protocol SXActionActivityProvider, SXViewControllerPresenting, SXCloseActionHandler;

#import <Foundation/Foundation.h>


@interface SXCloseActionActivityProvider : NSObject <SXActionActivityProvider>

 {
    id<SXViewControllerPresenting> *_viewControllerPresenting;
    id<SXCloseActionHandler> *_handler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityGroupForAction:(id)arg0 ;


@end


#endif