// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBSETUPASSISTANTBULLETEDLISTCONTROLLER_H
#define OBSETUPASSISTANTBULLETEDLISTCONTROLLER_H

@class NSString;
@protocol OBSetupAssistantSupport;


#import "OBWelcomeController.h"

@interface OBSetupAssistantBulletedListController : OBWelcomeController <OBSetupAssistantSupport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(void)addBulletedListItemWithDescription:(id)arg0 image:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif