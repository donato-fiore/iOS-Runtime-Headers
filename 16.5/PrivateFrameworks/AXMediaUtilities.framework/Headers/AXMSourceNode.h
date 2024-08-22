// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMSOURCENODE_H
#define AXMSOURCENODE_H

@class NSMutableArray;
@protocol NSSecureCoding;


#import "AXMVisionEngineNode.h"

@interface AXMSourceNode : AXMVisionEngineNode <NSSecureCoding>

 {
    NSMutableArray *_nodeQueue_resultHandlers;
}


@property (nonatomic) BOOL shouldProcessRemotely; // ivar: _shouldProcessRemotely


+(BOOL)supportsSecureCoding;
-(id)resultHandlers;
-(void)_nodeQueue_addResultHandler:(id)arg0 ;
-(void)_nodeQueue_removeAllResultHandlers;
-(void)_nodeQueue_removeResultHandler:(id)arg0 ;
-(void)addResultHandler:(id)arg0 ;
-(void)nodeInitialize;
-(void)produceImage:(id)arg0 ;
-(void)removeAllResultHandlers;
-(void)removeResultHandler:(id)arg0 ;
-(void)triggerWithContext:(id)arg0 cacheKey:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif