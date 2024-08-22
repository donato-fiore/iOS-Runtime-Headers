// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI33ENGAGEMENTPRESENTATIONCOORDINATOR_H
#define _TTC9SEYMOURUI33ENGAGEMENTPRESENTATIONCOORDINATOR_H

@protocol IAMApplicationContextProvider;

#import <Foundation/Foundation.h>


@interface _TtC9SeymourUI33EngagementPresentationCoordinator : NSObject <IAMApplicationContextProvider>

 {
    ? engagementClient;
    ? eventHub;
    ? messageCoordinator;
    ? subscriptionToken;
    ? engagementBannerRuleInfo;
    ? modalContextProvider;
    ? isActive;
}


@property (nonatomic, readonly) BOOL allowsModalMessageDisplay;


-(id)contextPropertyWithName:(id)arg0 ;
-(id)init;
-(id)viewControllerForModalPresentation;


@end


#endif