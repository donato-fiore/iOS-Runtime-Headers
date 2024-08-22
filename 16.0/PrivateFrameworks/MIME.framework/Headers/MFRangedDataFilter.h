// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFRANGEDDATAFILTER_H
#define MFRANGEDDATAFILTER_H



#import "MFBaseFilterDataConsumer.h"

@interface MFRangedDataFilter : MFBaseFilterDataConsumer {
    NSUInteger _consumedLength;
}


@property (nonatomic) _NSRange range; // ivar: _range


+(id)rangedFilterWithConsumer:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)rangedFilterWithConsumers:(id)arg0 range:(struct _NSRange )arg1 ;
-(NSInteger)appendData:(id)arg0 ;


@end


#endif