// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIAFTERCACOMMITBLOCK_H
#define _UIAFTERCACOMMITBLOCK_H


#import <Foundation/Foundation.h>

#import "_UIAfterCACommitBlock.h"

@interface _UIAfterCACommitBlock : NSObject {
    _UIAfterCACommitBlock *_next;
    id *_block;
    uint8_t _transactionCleared;
}




+(id)blockWithBlock:(id)arg0 ;
-(BOOL)run;


@end


#endif