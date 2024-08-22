// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPROGRESSFILTERDATACONSUMER_H
#define MFPROGRESSFILTERDATACONSUMER_H



#import "MFBaseFilterDataConsumer.h"

@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer {
    NSUInteger _currentBytes;
}


@property (readonly) NSUInteger expectedSize; // ivar: _expectedSize
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock


-(NSInteger)appendData:(id)arg0 ;
-(id)initWithConsumer:(id)arg0 expectedSize:(NSUInteger)arg1 ;
-(id)initWithConsumers:(id)arg0 expectedSize:(NSUInteger)arg1 ;


@end


#endif