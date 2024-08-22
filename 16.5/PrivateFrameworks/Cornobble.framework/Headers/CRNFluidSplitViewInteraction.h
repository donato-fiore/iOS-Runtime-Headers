// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRNFLUIDSPLITVIEWINTERACTION_H
#define CRNFLUIDSPLITVIEWINTERACTION_H

@class UISplitViewController, UIViewController;

#import <Foundation/Foundation.h>


@interface CRNFluidSplitViewInteraction : NSObject {
    UISplitViewController *_splitViewController;
    UIViewController *_supplementalController;
    UIViewController *_primaryController;
}




+(id)newWithSplitViewController:(id)arg0 ;
-(id)composerBlock:(SEL)arg0 ;


@end


#endif