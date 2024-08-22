// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCOUNTINGDATACONSUMER_H
#define MFCOUNTINGDATACONSUMER_H



#import "MFNullDataConsumer.h"

@interface MFCountingDataConsumer : MFNullDataConsumer

@property (readonly, nonatomic) NSUInteger count; // ivar: _count


-(NSInteger)appendData:(id)arg0 ;


@end


#endif