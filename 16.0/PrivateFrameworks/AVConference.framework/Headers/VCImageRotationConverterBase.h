// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCIMAGEROTATIONCONVERTERBASE_H
#define VCIMAGEROTATIONCONVERTERBASE_H



#import "VCImageConverterBase.h"

@interface VCImageRotationConverterBase : VCImageConverterBase {
    *OpaqueVTPixelRotationSession _rotationSession;
    unsigned int _rotationAngle;
}




-(id)initWithRotationAngle:(unsigned int)arg0 formatType:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif