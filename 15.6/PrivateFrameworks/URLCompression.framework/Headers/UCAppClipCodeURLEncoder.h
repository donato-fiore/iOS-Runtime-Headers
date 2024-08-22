// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UCAPPCLIPCODEURLENCODER_H
#define UCAPPCLIPCODEURLENCODER_H

@class NSString;
@protocol UCAppClipCodeURLEncodingPrivate, UCAppClipCodeURLEncoding;

#import <Foundation/Foundation.h>


@interface UCAppClipCodeURLEncoder : NSObject <UCAppClipCodeURLEncodingPrivate, UCAppClipCodeURLEncoding>

 {
    unique_ptr<UC::SUE::SegmentedURLEncoderImpl, std::default_delete<UC::SUE::SegmentedURLEncoderImpl>> _encoder;
    NSInteger _codingVersion;
}


@property (readonly, nonatomic) NSInteger codingVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)encoderWithExtendedInterfaceWithVersion:(NSInteger)arg0 ;
+(id)encoderWithVersion:(NSInteger)arg0 ;
-(id)_convertRawURLEncodingBitsToAppClipCodeData:(*void)arg0 ;
-(id)_errorFromCoderError:(*void)arg0 ;
-(id)_errorWithCoderErrorCode:(NSInteger)arg0 codingErrorSymbol:(id)arg1 message:(id)arg2 ;
-(id)_errorWithUnsupportedURLComponentType:(NSInteger)arg0 ;
-(id)encodeURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithCodingVersion:(NSInteger)arg0 ;
-(id)resultForEncodingURL:(id)arg0 error:(*id)arg1 ;
-(struct shared_ptr<UC::SUE::UCSegmentedURLEncodingResult> )_encodeURL:(id)arg0 error:(*id)arg1 ;
-(void)clearCaches;
-(void)dealloc;


@end


#endif