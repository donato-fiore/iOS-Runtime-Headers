// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTACTIVITYTRACETAPMEMO_H
#define DTACTIVITYTRACETAPMEMO_H

@class DTXMessage, NSData;


#import "DTTapDataMemo.h"

@interface DTActivityTraceTapMemo : DTTapDataMemo {
    DTXMessage *_message;
    NSData *_data;
}


@property (nonatomic) NSUInteger lastMachContinuousTimeSeen; // ivar: _lastMachContinuousTimeSeen


-(*void)getBufferWithLength:(*NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;


@end


#endif