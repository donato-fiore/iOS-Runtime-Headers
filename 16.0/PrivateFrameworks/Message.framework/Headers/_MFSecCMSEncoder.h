// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFSECCMSENCODER_H
#define _MFSECCMSENCODER_H

@class MFBufferedDataConsumer, NSMutableData;



@interface _MFSecCMSEncoder : MFBufferedDataConsumer {
    int _SecCMSError;
    *SecCmsEncoderStr _encoder;
    *SecCmsMessageStr _message;
    NSMutableData *_singleShot;
}




-(NSInteger)appendData:(id)arg0 ;
-(id)data;
-(void)dealloc;
-(void)done;


@end


#endif