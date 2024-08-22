// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIVIDEOENCODERDELEGATEADAPTER_H
#define HMIVIDEOENCODERDELEGATEADAPTER_H

@class HMFObject, NSString;
@protocol HMIVideoEncoderDelegate;



@interface HMIVideoEncoderDelegateAdapter : HMFObject <HMIVideoEncoderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *encoderDidEncodeSampleBuffer; // ivar: _encoderDidEncodeSampleBuffer
@property (copy) id *encoderDidFailWithError; // ivar: _encoderDidFailWithError
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)encoder:(id)arg0 didEncodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)encoder:(id)arg0 didFailWithError:(id)arg1 ;


@end


#endif