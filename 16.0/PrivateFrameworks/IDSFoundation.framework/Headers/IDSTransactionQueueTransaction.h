// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSTRANSACTIONQUEUETRANSACTION_H
#define IDSTRANSACTIONQUEUETRANSACTION_H


#import <Foundation/Foundation.h>


@interface IDSTransactionQueueTransaction : NSObject

@property (retain, nonatomic) id *item; // ivar: _item
@property (nonatomic) BOOL readyToExecute; // ivar: _readyToExecute


-(id)initWithItem:(id)arg0 ;
-(id)initWithItem:(id)arg0 readyToExecute:(BOOL)arg1 ;


@end


#endif