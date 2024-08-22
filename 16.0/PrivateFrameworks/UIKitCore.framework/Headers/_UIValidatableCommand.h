// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVALIDATABLECOMMAND_H
#define _UIVALIDATABLECOMMAND_H



#import "UICommand.h"
#import "UICommandAlternate.h"

@interface _UIValidatableCommand : UICommand {
    UICommand *_command;
    UICommandAlternate *_alternate;
}




-(SEL)action;
-(id)alternates;
-(id)init;
-(id)propertyList;
-(void)useCommand:(id)arg0 alternate:(id)arg1 ;


@end


#endif