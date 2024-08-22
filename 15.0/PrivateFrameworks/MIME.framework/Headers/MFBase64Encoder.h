// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFBASE64ENCODER_H
#define MFBASE64ENCODER_H



#import "MFBaseFilterDataConsumer.h"

@interface MFBase64Encoder : MFBaseFilterDataConsumer {
    char * _table;
    NSUInteger _left;
    unsigned char _leftovers;
    NSUInteger _line;
}


@property (nonatomic) BOOL allowSlash;
@property (nonatomic) NSUInteger lineBreak; // ivar: _lineBreak
@property (nonatomic) char padChar; // ivar: _padChar


-(NSInteger)appendData:(id)arg0 ;
-(id)initWithConsumers:(id)arg0 ;
-(void)done;
-(void)setStandardLineBreak;


@end


#endif