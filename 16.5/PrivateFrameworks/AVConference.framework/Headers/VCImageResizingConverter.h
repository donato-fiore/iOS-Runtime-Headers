// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCIMAGERESIZINGCONVERTER_H
#define VCIMAGERESIZINGCONVERTER_H



#import "VCImageConverterBase.h"

@interface VCImageResizingConverter : VCImageConverterBase {
    *OpaqueVTPixelTransferSession _transferSession;
}




-(id)initWithOutputWidth:(NSUInteger)arg0 outputHeight:(NSUInteger)arg1 formatType:(unsigned int)arg2 ;
-(void)dealloc;


@end


#endif