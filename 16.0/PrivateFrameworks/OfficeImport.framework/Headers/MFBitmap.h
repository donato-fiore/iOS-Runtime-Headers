// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFBITMAP_H
#define MFBITMAP_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface MFBitmap : NSObject {
    int m_width;
    int m_height;
    unsigned int m_bitsPerPixel;
    int m_compression;
    BOOL m_isOS2;
    unsigned int m_infoHeaderSize;
    unsigned int m_paletteSize;
    NSMutableData *m_bmpData;
}




-(BOOL)isEmpty;
-(BOOL)isFlipped;
-(BOOL)parseHeader:(char *)arg0 in_headerSize:(unsigned int)arg1 ;
-(BOOL)processDIBHeader:(id)arg0 in_header:(char *)arg1 in_headerSize:(unsigned int)arg2 in_usage:(int)arg3 ;
-(NSUInteger)pixelDataLength;
-(char *)pixelData;
-(id)init;
-(id)initWithBitmap:(id)arg0 in_width:(int)arg1 in_height:(int)arg2 in_planes:(int)arg3 in_bitsPerPixel:(int)arg4 in_bitmap:(char *)arg5 in_bitmapSize:(unsigned int)arg6 ;
-(id)initWithDIBitmap:(id)arg0 in_dib:(char *)arg1 in_dibSize:(unsigned int)arg2 in_usage:(int)arg3 ;
-(id)initWithDIBitmap:(id)arg0 in_header:(char *)arg1 in_headerSize:(unsigned int)arg2 in_bitmap:(char *)arg3 in_bitmapSize:(unsigned int)arg4 in_usage:(int)arg5 ;
-(unsigned int)coloursUsed:(char *)arg0 in_headerSize:(unsigned int)arg1 in_usage:(int)arg2 ;
-(unsigned int)pixelDataOffset:(char *)arg0 in_headerSize:(unsigned int)arg1 in_usage:(int)arg2 ;
-(void)appendDIBPalette:(id)arg0 in_header:(char *)arg1 in_headerSize:(unsigned int)arg2 in_usage:(int)arg3 ;
-(void)setMonoPalette:(id)arg0 ;
-(void)setNull;
-(void)writeFileHeader;
-(void)writeInfoHeader;
-(void)writePaletteEntry:(id)arg0 in_index:(int)arg1 ;


@end


#endif