// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFSECCMSDECODER_H
#define _MFSECCMSDECODER_H

@class NSString, NSArray;
@protocol MFCollectingDataConsumer;

#import <Foundation/Foundation.h>


@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer>

 {
    *SecCmsMessageStr _message;
    *SecCmsDigestContextStr _digest;
    *SecCmsSignedDataStr _signedData;
    *SecCmsEnvelopedDataStr _envelopedData;
    BOOL _isEncrypted;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int lastSecCMSError; // ivar: _SecCMSError
@property (readonly, nonatomic) NSArray *signers; // ivar: _signers
@property (readonly) Class superclass;


-(BOOL)isContentEncrypted;
-(BOOL)isContentSigned;
-(NSInteger)appendData:(id)arg0 ;
-(id)data;
-(id)initWithPartData:(id)arg0 error:(*id)arg1 ;
-(id)signedData;
-(id)verifyAgainstSenders:(id)arg0 signingError:(*id)arg1 ;
-(void)dealloc;
-(void)done;


@end


#endif