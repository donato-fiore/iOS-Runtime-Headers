// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFBASE64DECODER_H
#define MFBASE64DECODER_H

@class NSMutableData;


#import "MFBaseFilterDataConsumer.h"

@interface MFBase64Decoder : MFBaseFilterDataConsumer {
    NSMutableData *_leftovers;
    unsigned int _decodedBits;
    NSUInteger _equalCount;
    char * _table;
}


@property (nonatomic) BOOL convertCommas;
@property (nonatomic) BOOL isBound; // ivar: _bound
@property (readonly, nonatomic) NSUInteger unconverted; // ivar: _validBytes


+(BOOL)isValidBase64:(id)arg0 ;
-(NSInteger)appendData:(id)arg0 ;
-(NSUInteger)_decodeBytes:(char *)arg0 end:(char *)arg1 into:(char *)arg2 length:(NSUInteger)arg3 startingAt:(NSUInteger)arg4 outEncodedOffset:(*NSUInteger)arg5 ;
-(id)initWithConsumers:(id)arg0 ;
-(void)done;


@end


#endif