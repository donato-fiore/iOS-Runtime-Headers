// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFSECCMSENCODER_H
#define _MFSECCMSENCODER_H

@class MFBufferedDataConsumer, NSMutableData;



@interface _MFSecCMSEncoder : MFBufferedDataConsumer {
    *SecCmsEncoderStr _encoder;
    *SecCmsMessageStr _message;
    NSMutableData *_singleShot;
}


@property (readonly, nonatomic) int lastSecCMSError; // ivar: _SecCMSError


-(NSInteger)appendData:(id)arg0 ;
-(id)data;
-(id)initForEncryptionWithCompositionSpecification:(id)arg0 error:(*id)arg1 ;
-(id)initForSigningWithSender:(id)arg0 compositionSpecification:(id)arg1 error:(*id)arg2 ;
-(void)_appendBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)done;


@end


#endif