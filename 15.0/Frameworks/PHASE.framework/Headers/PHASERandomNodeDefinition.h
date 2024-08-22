// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASERANDOMNODEDEFINITION_H
#define PHASERANDOMNODEDEFINITION_H

@class NSMutableArray;


#import "PHASESoundEventNodeDefinition.h"

@interface PHASERandomNodeDefinition : PHASESoundEventNodeDefinition

@property (nonatomic) NSInteger noRepeatLastX;
@property (retain, nonatomic) NSMutableArray *subtrees; // ivar: _subtrees
@property (nonatomic) NSInteger uniqueSelectionQueueLength; // ivar: _uniqueSelectionQueueLength


-(id)children;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithUID:(id)arg0 ;
-(void)addSubtree:(id)arg0 weight:(id)arg1 ;


@end


#endif