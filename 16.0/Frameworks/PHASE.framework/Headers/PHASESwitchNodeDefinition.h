// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASESWITCHNODEDEFINITION_H
#define PHASESWITCHNODEDEFINITION_H

@class NSMutableArray;


#import "PHASESoundEventNodeDefinition.h"
#import "PHASEStringMetaParameterDefinition.h"

@interface PHASESwitchNodeDefinition : PHASESoundEventNodeDefinition

@property (retain, nonatomic) NSMutableArray *subtrees; // ivar: _subtrees
@property (readonly, nonatomic) PHASEStringMetaParameterDefinition *switchMetaParameterDefinition; // ivar: _switchMetaParameterDefinition


+(id)new;
-(id)children;
-(id)init;
-(id)initWithSwitchMetaParameterDefinition:(id)arg0 ;
-(id)initWithSwitchMetaParameterDefinition:(id)arg0 identifier:(id)arg1 ;
-(id)initWithSwitchMetaParameterDefinition:(id)arg0 uid:(id)arg1 ;
-(void)addSubtree:(id)arg0 switchValue:(id)arg1 ;


@end


#endif