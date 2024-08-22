// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGX_H
#define SIGX_H


#import <Foundation/Foundation.h>


@interface SigX : NSObject

@property (nonatomic) *void mySigX; // ivar: _mySigX


+(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )getVersion;
-(BOOL)ConvertException:(struct exception *)arg0 toError:(*id)arg1 ;
-(BOOL)ConvertSystemError:(struct system_error *)arg0 toError:(*id)arg1 ;
-(BOOL)FillUnknownError:(*id)arg0 ;
-(BOOL)flowBuffer:(id)arg0 error:(*id)arg1 ;
-(BOOL)flowFloatSamples:(*float)arg0 sampleCount:(int)arg1 channels:(int)arg2 error:(*id)arg3 ;
-(BOOL)flowFloatSamples:(*float)arg0 sampleCount:(int)arg1 error:(*id)arg2 ;
-(BOOL)flowIntSamples:(*short)arg0 sampleCount:(int)arg1 channels:(int)arg2 error:(*id)arg3 ;
-(BOOL)flowIntSamples:(*short)arg0 sampleCount:(int)arg1 error:(*id)arg2 ;
-(BOOL)getSignature:(*void)arg0 error:(*id)arg1 ;
-(BOOL)resetWithError:(*id)arg0 ;
-(BOOL)setRollingBufferSeconds:(float)arg0 error:(*id)arg1 ;
-(id)initWithSignatureType:(int)arg0 sampleRate:(unsigned int)arg1 error:(*id)arg2 ;
-(id)initWithSignatureType:(int)arg0 sampleRate:(unsigned int)arg1 signatureOptions:(int)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif