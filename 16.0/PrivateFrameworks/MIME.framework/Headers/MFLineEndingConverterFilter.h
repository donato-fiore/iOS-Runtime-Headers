// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFLINEENDINGCONVERTERFILTER_H
#define MFLINEENDINGCONVERTERFILTER_H



#import "MFBaseFilterDataConsumer.h"

@interface MFLineEndingConverterFilter : MFBaseFilterDataConsumer {
    BOOL _lastCR;
}




-(NSInteger)appendData:(id)arg0 ;
-(void)done;


@end


#endif