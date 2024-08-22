// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWMODULEINDENTATIONCACHE_H
#define WFWORKFLOWMODULEINDENTATIONCACHE_H

@class NSCountedSet, NSLock, WFWorkflow;

#import <Foundation/Foundation.h>


@interface WFWorkflowModuleIndentationCache : NSObject

@property (readonly, nonatomic) NSCountedSet *indentationLevels; // ivar: _indentationLevels
@property (readonly, nonatomic) NSLock *lock; // ivar: _lock
@property (readonly, weak, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(NSUInteger)indentationLevelForAction:(id)arg0 ;
-(id)initWithWorkflow:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif