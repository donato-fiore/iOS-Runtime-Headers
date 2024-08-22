// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFQUOTEDPRINTABLEENCODER_H
#define MFQUOTEDPRINTABLEENCODER_H



#import "MFBaseFilterDataConsumer.h"

@interface MFQuotedPrintableEncoder : MFBaseFilterDataConsumer {
    NSUInteger _line;
    NSUInteger _matchedFrom;
    unsigned char _lastHorizontalWhitespace;
    BOOL _lastWasNewLine;
}


@property (nonatomic) BOOL forHeader; // ivar: _forHeader
@property (nonatomic) BOOL forTextPart; // ivar: _forTextPart


+(NSUInteger)requiredSizeToEncodeHeaderBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(NSInteger)appendData:(id)arg0 ;
-(void)done;


@end


#endif