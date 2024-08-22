// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDPERSONACTION_H
#define DDPERSONACTION_H

@class BCSBusinessItem, NSString, UIViewController;


#import "DDRemoteAction.h"

@interface DDPersonAction : DDRemoteAction {
    BOOL _contactExists;
    BOOL _fromCNContact;
    BCSBusinessItem *_bizItem;
    BOOL _bizItemIsMessageable;
    NSString *_lastBizNumberFetched;
    UIViewController *_menuHeaderViewController;
}




+(?)handlesUrlresult;
+(id)viewControllerProviderClass;
-(?)initWithURL:(?)arg0 resultcontext;
-(BOOL)menuHasHeaderView;
-(BOOL)phoneNumberIsBusiness:(id)arg0 ;
-(BOOL)prefersActionMenuStyle;
-(id)_appendActionsForPhoneNumbers:(id)arg0 emailAddresses:(id)arg1 class:(Class)arg2 filter:(id)arg3 scheme:(id)arg4 ;
-(id)_menuActionsForBusinessWithNumber:(id)arg0 ;
-(id)_menuActionsForPersonWithNumber:(id)arg0 email:(id)arg1 ;
-(id)menuActions;
-(id)menuHeaderView;
-(id)menuHeaderViewController;
-(struct CGSize )suggestedContentSize;


@end


#endif