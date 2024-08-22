// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERDISPLAYITEMREMOVALRESOLUTIONRESULTACTION_H
#define SBSWITCHERDISPLAYITEMREMOVALRESOLUTIONRESULTACTION_H


#import <Foundation/Foundation.h>

#import "SBAppLayout.h"

@interface SBSwitcherDisplayItemRemovalResolutionResultAction : NSObject

@property (readonly, nonatomic) NSInteger actionType; // ivar: _actionType
@property (readonly, copy, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, copy, nonatomic) SBAppLayout *replacementAppLayout; // ivar: _replacementAppLayout


+(id)defaultRemovalPolicyActionWithAppLayout:(id)arg0 ;
+(id)replacementActionWithAppLayout:(id)arg0 replacementAppLayout:(id)arg1 ;
-(id)_initWithAppLayout:(id)arg0 actionType:(NSInteger)arg1 ;


@end


#endif