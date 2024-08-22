// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPLENGINESTOREBATCHEDTRANSACTION_H
#define _CPLENGINESTOREBATCHEDTRANSACTION_H


#import <Foundation/Foundation.h>

#import "CPLTransaction.h"

@interface _CPLEngineStoreBatchedTransaction : NSObject {
    CPLTransaction *_dirty;
}


@property (copy, nonatomic) id *block; // ivar: _block
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)init;
-(void)_releaseDirty;
-(void)dealloc;


@end


#endif