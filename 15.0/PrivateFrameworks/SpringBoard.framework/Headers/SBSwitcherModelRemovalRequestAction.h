// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSWITCHERMODELREMOVALREQUESTACTION_H
#define SBSWITCHERMODELREMOVALREQUESTACTION_H


#import <Foundation/Foundation.h>

#import "SBAppLayout.h"

@interface SBSwitcherModelRemovalRequestAction : NSObject

@property (readonly, nonatomic) NSInteger actionType; // ivar: _actionType
@property (readonly, copy, nonatomic) SBAppLayout *replacementAppLayout; // ivar: _replacementAppLayout


+(id)defaultRemovalPolicyAction;
+(id)replacementActionWithAppLayout:(id)arg0 ;
-(id)_initWithActionType:(NSInteger)arg0 ;


@end


#endif