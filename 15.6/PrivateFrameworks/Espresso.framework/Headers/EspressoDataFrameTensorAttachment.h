// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESPRESSODATAFRAMETENSORATTACHMENT_H
#define ESPRESSODATAFRAMETENSORATTACHMENT_H



#import "EspressoDataFrameAttachment.h"

@interface EspressoDataFrameTensorAttachment : EspressoDataFrameAttachment {
    ? buffer;
}




+(struct ? )copyFromCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(struct ? )copyAsEspressoBuffer;
-(void)loadFromDict:(id)arg0 frameStorage:(id)arg1 ;


@end


#endif