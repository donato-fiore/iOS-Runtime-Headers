// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMSERVICEGRAPHNODE_H
#define CDMSERVICEGRAPHNODE_H

@class NSBlockOperation, NSString;



@interface CDMServiceGraphNode : NSBlockOperation {
    id *_cancellationBlock;
    NSString *_nodeName;
    NSString *_handlerId;
}




// +(id)initWithName:(id)arg0 forHandler:(id)arg1 usingFunction:(id)arg2 withError:(unk)arg3 cancellationBlock:(id)arg4  ;
// +(id)initWithName:(id)arg0 forHandler:(id)arg1 usingFunction:(id)arg2 withError:(unk)arg3 cancellationBlock:(id)arg4 selfMetadata:(unk)arg5  ;
// +(id)initWithName:(id)arg0 forHandler:(id)arg1 withError:(id)arg2 usingFunction:(unk)arg3  ;
// +(id)initWithName:(id)arg0 forHandler:(id)arg1 withError:(id)arg2 usingFunction:(unk)arg3 selfMetadata:(id)arg4  ;
-(id)getHandlerId;
-(id)getNodeName;
-(void)cancel;


@end


#endif