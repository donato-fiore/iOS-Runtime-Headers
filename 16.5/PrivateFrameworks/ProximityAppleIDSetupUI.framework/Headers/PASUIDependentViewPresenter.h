// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PASUIDEPENDENTVIEWPRESENTER_H
#define PASUIDEPENDENTVIEWPRESENTER_H

@protocol PASUIDependentViewPresenterDelegate;

#import <Foundation/Foundation.h>


@interface PASUIDependentViewPresenter : NSObject {
    ? analytics;
    ? flowController;
    ? parentViewController;
    ? messageSessionProvider;
    ? authenticator;
    ? viewControllerProvider;
    ? deviceProvider;
    ? dependentAppleIDExchanger;
    ? flowTimer;
}


@property (nonatomic, weak) NSObject<PASUIDependentViewPresenterDelegate> *delegate; // ivar: delegate


-(?)activateWithTemplateMessageSessioncompletion;
-(?)setTemplateMessageSessioncompletion;
-(id)init;
-(id)initWithParentViewController:(id)arg0 ;
-(void)dealloc;


@end


#endif