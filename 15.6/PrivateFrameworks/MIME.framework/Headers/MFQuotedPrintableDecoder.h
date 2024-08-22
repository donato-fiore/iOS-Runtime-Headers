// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFQUOTEDPRINTABLEDECODER_H
#define MFQUOTEDPRINTABLEDECODER_H



#import "MFBaseFilterDataConsumer.h"

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer {
    unsigned char _lastEncoded;
    NSUInteger _required;
    BOOL _badlyEncoded;
}


@property (nonatomic) BOOL forTextPart; // ivar: _forTextPart


-(NSInteger)appendData:(id)arg0 ;
-(void)done;


@end


#endif