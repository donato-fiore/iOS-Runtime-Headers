// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PASUIGUARDIANVIEWPRESENTER_H
#define PASUIGUARDIANVIEWPRESENTER_H

@protocol PASUIGuardianViewPresenterDelegate;

#import <Foundation/Foundation.h>


@interface PASUIGuardianViewPresenter : NSObject {
    ? parentViewController;
    ? messageSessionProvider;
    ? authenticator;
    ? viewControllerProvider;
    ? flowController;
    ? cardContentView;
    ? cardAdapter;
}


@property (nonatomic, weak) NSObject<PASUIGuardianViewPresenterDelegate> *delegate; // ivar: delegate


-(?)activateWithTemplateMessageSessioncompletion;
-(?)setTemplateMessageSessioncompletion;
-(id)init;
-(id)initWithSharingViewController:(id)arg0 ;
-(void)dealloc;


@end


#endif