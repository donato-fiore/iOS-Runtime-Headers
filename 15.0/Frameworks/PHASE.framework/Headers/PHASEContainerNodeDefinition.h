// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASECONTAINERNODEDEFINITION_H
#define PHASECONTAINERNODEDEFINITION_H

@class NSMutableArray;


#import "PHASESoundEventNodeDefinition.h"

@interface PHASEContainerNodeDefinition : PHASESoundEventNodeDefinition {
    NSMutableArray *_subtrees;
}




+(id)new;
-(id)children;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithUID:(id)arg0 ;
-(void)addSubtree:(id)arg0 ;


@end


#endif