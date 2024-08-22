// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPMETAFILEIMAGE_H
#define MFPMETAFILEIMAGE_H

@class NSData;


#import "MFPImage.h"

@interface MFPMetafileImage : MFPImage {
    NSData *mMetafileData;
}




-(id)initWithMetafileData:(id)arg0 ;
-(id)phoneImage;
-(void)drawInRect:(struct CGRect )arg0 fromRect:(struct CGRect )arg1 unit:(int)arg2 effect:(id)arg3 ;


@end


#endif