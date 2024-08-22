// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMESCREENENTITY_H
#define SBHOMESCREENENTITY_H



#import "SBWorkspaceEntity.h"

@interface SBHomeScreenEntity : SBWorkspaceEntity



-(BOOL)isHomeScreenEntity;
-(NSInteger)_mainDisplayPreferredInterfaceOrientation;
-(NSInteger)layoutRole;
-(id)init;


@end


#endif