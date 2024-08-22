// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTQUICKACTIONSDISAMBIGUATIONMENUPRESENTATION_H
#define CNCONTACTQUICKACTIONSDISAMBIGUATIONMENUPRESENTATION_H


#import <Foundation/Foundation.h>


@interface CNContactQuickActionsDisambiguationMenuPresentation : NSObject



+(id)alertSheetPresentation;
+(id)defaultPresentation;
+(id)modalPresentation;
-(id)initBase;
-(id)viewControllerForPresentingActionsController:(id)arg0 fromView:(id)arg1 dismissDisambiguationMenuHandler:(id)arg2 ;


@end


#endif