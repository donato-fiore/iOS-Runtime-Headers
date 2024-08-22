// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFSECCMSDECODER_H
#define _MFSECCMSDECODER_H

@class NSArray, NSString;
@protocol MFCollectingDataConsumer;

#import <Foundation/Foundation.h>


@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer>

 {
    int _SecCMSError;
    *SecCmsMessageStr _message;
    *SecCmsDigestContextStr _digest;
    NSArray *_signers;
    *SecCmsSignedDataStr _signedData;
    *SecCmsEnvelopedDataStr _envelopedData;
    BOOL _isEncrypted;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)appendData:(id)arg0 ;
-(id)data;
-(void)dealloc;
-(void)done;


@end


#endif