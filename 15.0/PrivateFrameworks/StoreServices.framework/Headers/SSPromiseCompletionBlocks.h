// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSPROMISECOMPLETIONBLOCKS_H
#define SSPROMISECOMPLETIONBLOCKS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SSPromiseCompletionBlocks : NSObject {
    NSMutableArray *_completionBlocks;
    BOOL _shouldCallImmediately;
}




-(id)init;
-(void)addCompletionBlock:(id)arg0 ;
-(void)addErrorBlock:(id)arg0 ;
-(void)addSuccessBlock:(id)arg0 ;
// -(void)callCompletionBlock:(id)arg0 withPromiseResult:(unk)arg1  ;
// -(void)callErrorBlock:(id)arg0 withPromiseResult:(unk)arg1  ;
// -(void)callSuccessBlock:(id)arg0 withPromiseResult:(unk)arg1  ;
-(void)flushCompletionBlocksWithPromiseResult:(id)arg0 ;


@end


#endif