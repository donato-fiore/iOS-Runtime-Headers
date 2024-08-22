// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPHONEBITMAP_H
#define MFPHONEBITMAP_H



#import "MFBitmap.h"
#import "OITSUImage.h"

@interface MFPhoneBitmap : MFBitmap {
    OITSUImage *m_image;
}




-(id)getImage;


@end


#endif