// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREMETADATAINPUT_H
#define AVCAPTUREMETADATAINPUT_H



#import "AVCaptureInput.h"
#import "AVCaptureMetadataInputInternal.h"

@interface AVCaptureMetadataInput : AVCaptureInput {
    AVCaptureMetadataInputInternal *_internal;
}




+(id)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 clock:(struct OpaqueCMClock *)arg1 ;
+(void)initialize;
-(BOOL)appendTimedMetadataGroup:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 clock:(struct OpaqueCMClock *)arg1 ;
-(id)ports;
-(id)sourceID;
-(struct OpaqueCMClock *)clock;
-(void)dealloc;


@end


#endif