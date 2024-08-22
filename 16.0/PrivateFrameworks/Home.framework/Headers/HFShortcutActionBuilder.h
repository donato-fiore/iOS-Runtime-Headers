// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSHORTCUTACTIONBUILDER_H
#define HFSHORTCUTACTIONBUILDER_H



#import "HFActionBuilder.h"

@interface HFShortcutActionBuilder : HFActionBuilder



+(Class)homeKitRepresentationClass;
-(BOOL)isAffectedByEndEvents;
-(id)commitItem;
-(id)containedAccessoryRepresentables;
-(id)createNewAction;
-(id)performValidation;


@end


#endif