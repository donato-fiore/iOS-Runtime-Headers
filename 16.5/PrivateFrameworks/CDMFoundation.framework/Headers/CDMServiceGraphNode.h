// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMSERVICEGRAPHNODE_H
#define CDMSERVICEGRAPHNODE_H

@class NSBlockOperation, NSString, NSHashTable;



@interface CDMServiceGraphNode : NSBlockOperation {
    id *_cancellationBlock;
    NSString *_nodeName;
    NSString *_handlerId;
    NSHashTable *_successors;
}




// +(id)initWithName:(id)arg0 forHandler:(id)arg1 usingFunction:(id)arg2 withError:(unk)arg3 cancellationBlock:(id)arg4  ;
// +(id)initWithName:(id)arg0 forHandler:(id)arg1 usingFunction:(id)arg2 withError:(unk)arg3 cancellationBlock:(id)arg4 dataDispatcher:(unk)arg5  ;
// +(id)initWithName:(id)arg0 forHandler:(id)arg1 withError:(id)arg2 usingFunction:(unk)arg3  ;
// +(id)initWithName:(id)arg0 forHandler:(id)arg1 withError:(id)arg2 usingFunction:(unk)arg3 dataDispatcher:(id)arg4  ;
-(id)getHandlerId;
-(id)getNodeName;
-(id)getSuccessors;
-(void)addDependency:(id)arg0 ;
-(void)addSuccessor:(id)arg0 ;
-(void)cancel;
-(void)removeDependency:(id)arg0 ;
-(void)removeSuccessor:(id)arg0 ;


@end


#endif