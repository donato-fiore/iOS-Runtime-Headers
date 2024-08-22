// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPOSITIONALBGRAIMAGETABLE_H
#define PLPOSITIONALBGRAIMAGETABLE_H



#import "PLPositionalImageTable.h"

@interface PLPositionalBGRAImageTable : PLPositionalImageTable



+(NSUInteger)metalPixelFormat;
+(struct __CFString *)colorSpaceName;
-(struct CGImage *)createImageWithIdentifier:(id)arg0 orIndex:(NSUInteger)arg1 ;
-(void)getImageDataOffset:(*NSInteger)arg0 size:(struct CGSize *)arg1 bytesPerRow:(*NSUInteger)arg2 fromEntryFooter:(struct PLImageTableEntryFooter_s *)arg3 ;


@end


#endif