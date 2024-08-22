// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEODECODERDELEGATEADAPTER_H
#define HMIVIDEODECODERDELEGATEADAPTER_H

@class HMFObject, NSString;
@protocol HMIVideoDecoderDelegate;



@interface HMIVideoDecoderDelegateAdapter : HMFObject <HMIVideoDecoderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (copy) id *decoderDidDecodeSampleBuffer; // ivar: _decoderDidDecodeSampleBuffer
@property (copy) id *decoderDidFailWithError; // ivar: _decoderDidFailWithError
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)decoder:(id)arg0 didDecodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)decoder:(id)arg0 didFailWithError:(id)arg1 ;


@end


#endif