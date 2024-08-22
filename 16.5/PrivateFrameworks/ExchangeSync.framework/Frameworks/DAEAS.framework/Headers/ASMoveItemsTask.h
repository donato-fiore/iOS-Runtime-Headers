// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASMOVEITEMSTASK_H
#define ASMOVEITEMSTASK_H

@class NSMutableArray, NSArray;


#import "ASTask.h"

@interface ASMoveItemsTask : ASTask

@property (nonatomic) NSInteger dataclass; // ivar: _dataclass
@property (retain, nonatomic) NSMutableArray *moveItems; // ivar: _moveItems
@property (retain, nonatomic) NSArray *pushedMoveRequests; // ivar: _pushedMoveRequests


-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)requestBody;
-(int)commandCode;
-(void)addSourceID:(id)arg0 sourceFolder:(id)arg1 destinatonFolder:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;


@end


#endif