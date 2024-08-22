// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKWORKQUEUEITEM_H
#define NPKWORKQUEUEITEM_H


#import <Foundation/Foundation.h>

#import "NPKOSTransaction.h"

@interface NPKWorkQueueItem : NSObject

@property (readonly, nonatomic) NPKOSTransaction *transaction; // ivar: _transaction
@property (readonly, nonatomic) id *workBlock; // ivar: _workBlock


+(id)itemWithTransaction:(id)arg0 work:(id)arg1 ;
-(id)initWithTransaction:(id)arg0 work:(id)arg1 ;


@end


#endif