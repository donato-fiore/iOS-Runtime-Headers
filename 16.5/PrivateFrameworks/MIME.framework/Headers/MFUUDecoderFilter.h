// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFUUDECODERFILTER_H
#define MFUUDECODERFILTER_H

@protocol OS_dispatch_data;


#import "MFBaseFilterDataConsumer.h"

@interface MFUUDecoderFilter : MFBaseFilterDataConsumer {
    NSObject<OS_dispatch_data> *_data;
}




-(NSInteger)appendData:(id)arg0 ;
-(void)done;


@end


#endif