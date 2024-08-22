// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSSTRINGACTION_H
#define BCSSTRINGACTION_H



#import "BCSAction.h"

@interface BCSStringAction : BCSAction



-(id)actionIcon;
-(id)actionPickerItems;
-(id)contentPreviewString;
-(id)defaultActionTargetApplicationBundleIdentifier;
-(id)initWithData:(id)arg0 codePayload:(id)arg1 ;
-(id)localizedDefaultActionDescription;
-(id)shortDescription;
-(void)performAction;
-(void)performActionWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)performDefaultAction;


@end


#endif