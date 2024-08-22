// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UCAPPCLIPCODEURLDECODER_H
#define UCAPPCLIPCODEURLDECODER_H

@class NSString;
@protocol UCAppClipCodeURLDecoding;

#import <Foundation/Foundation.h>


@interface UCAppClipCodeURLDecoder : NSObject <UCAppClipCodeURLDecoding>

 {
    unique_ptr<UC::SUE::SegmentedURLDecoderImpl, std::default_delete<UC::SUE::SegmentedURLDecoderImpl>> _decoder;
    NSInteger _codingVersion;
}


@property (readonly, nonatomic) NSInteger codingVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)decoderWithVersion:(NSInteger)arg0 ;
-(id)_errorWithCoderErrorCode:(NSInteger)arg0 message:(id)arg1 ;
-(id)decodeURLWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithCodingVersion:(NSInteger)arg0 ;
-(struct unique_ptr<UC::UCBitVector, std::default_delete<UC::UCBitVector>> )_bitVectorFromData:(id)arg0 ;
-(void)clearCaches;
-(void)dealloc;


@end


#endif