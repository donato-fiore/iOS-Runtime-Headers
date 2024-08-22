// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPHUFFMANENCODER_H
#define _DPHUFFMANENCODER_H

@class NSDictionary, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface _DPHuffmanEncoder : NSObject {
    NSUInteger _maxOutputBitLength;
    NSDictionary *_table;
    NSNumber *_unknownTokenCode;
}


@property (readonly, copy, nonatomic) NSString *tableUUID; // ivar: _tableUUID


+(id)codeToBinaryString:(NSUInteger)arg0 ;
-(BOOL)tokenExist:(id)arg0 ;
-(id)encodeTokens:(id)arg0 ;
-(id)init;
-(id)initWithTableClassName:(id)arg0 maxOutputBitLength:(NSUInteger)arg1 ;


@end


#endif