// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBSETUPASSISTANTLANGUAGELOCALECONTROLLER_H
#define OBSETUPASSISTANTLANGUAGELOCALECONTROLLER_H

@class NSString;
@protocol OBSetupAssistantSupport;


#import "OBTableWelcomeController.h"

@interface OBSetupAssistantLanguageLocaleController : OBTableWelcomeController <OBSetupAssistantSupport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)bottomPaddingHeight;
-(CGFloat)headerViewBottomToTableViewHeaderTopPadding;
-(CGFloat)headerViewBottomToTableViewTopPaddingForLocalePane;


@end


#endif