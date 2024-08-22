// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISURLOPERATIONPOOL_H
#define ISURLOPERATIONPOOL_H


#import <Foundation/Foundation.h>

#import "ISOperationQueue.h"

@interface ISURLOperationPool : NSObject

@property (retain, nonatomic) ISOperationQueue *operationQueue; // ivar: _operationQueue


-(id)_poolOperationForOperation:(id)arg0 flags:(NSInteger)arg1 ;
-(id)init;
-(void)addOperation:(id)arg0 withFlags:(NSInteger)arg1 ;
-(void)cancelOperation:(id)arg0 ;
-(void)dealloc;


@end


#endif