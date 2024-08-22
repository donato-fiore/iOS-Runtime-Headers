// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFFONT_H
#define MFFONT_H

@class NSString;
@protocol MFObject;

#import <Foundation/Foundation.h>


@interface MFFont : NSObject <MFObject>

 {
    int m_lfHeight;
    int m_lfWidth;
    int m_lfEscapement;
    int m_lfOrientation;
    int m_lfWeight;
    BOOL m_lfItalic;
    BOOL m_lfUnderline;
    BOOL m_lfStrikeOut;
    int m_lfCharSet;
    int m_lfOutPrecision;
    unsigned char m_lfClipPrecision;
    int m_lfQuality;
    int m_pitch;
    int m_family;
    NSString *m_lfFaceName;
    NSString *m_elfFullName;
    NSString *m_elfStyle;
    unsigned int m_elfVersion;
    unsigned int m_elfStyleSize;
    unsigned int m_elfMatch;
    unsigned int m_elfVendorId;
    unsigned int m_elfCulture;
}




+(id)fontWithExtendedFeatures:(int)arg0 lfWidth:(int)arg1 lfEscapement:(int)arg2 lfOrientation:(int)arg3 lfWeight:(int)arg4 lfItalic:(BOOL)arg5 lfUnderline:(BOOL)arg6 lfStrikeOut:(BOOL)arg7 lfCharSet:(int)arg8 lfOutPrecision:(int)arg9 lfClipPrecision:(unsigned char)arg10 lfQuality:(int)arg11 pitch:(int)arg12 family:(int)arg13 lfFaceName:(id)arg14 elfFullName:(id)arg15 elfStyle:(id)arg16 elfVersion:(unsigned int)arg17 elfStyleSize:(unsigned int)arg18 elfMatch:(unsigned int)arg19 elfVendorId:(unsigned int)arg20 elfCulture:(unsigned int)arg21 ;
+(id)fontWithFeatures:(int)arg0 lfWidth:(int)arg1 lfEscapement:(int)arg2 lfOrientation:(int)arg3 lfWeight:(int)arg4 lfItalic:(BOOL)arg5 lfUnderline:(BOOL)arg6 lfStrikeOut:(BOOL)arg7 lfCharSet:(int)arg8 lfOutPrecision:(int)arg9 lfClipPrecision:(unsigned char)arg10 lfQuality:(int)arg11 pitch:(int)arg12 family:(int)arg13 lfFaceName:(id)arg14 ;
+(id)fontWithStockFont:(int)arg0 ;
-(BOOL)strikeout;
-(BOOL)underline;
-(CGFloat)escapement;
-(CGFloat)fontHeight;
-(id)faceName;
-(id)initWithAllFeatures:(int)arg0 lfWidth:(int)arg1 lfEscapement:(int)arg2 lfOrientation:(int)arg3 lfWeight:(int)arg4 lfItalic:(BOOL)arg5 lfUnderline:(BOOL)arg6 lfStrikeOut:(BOOL)arg7 lfCharSet:(int)arg8 lfOutPrecision:(int)arg9 lfClipPrecision:(unsigned char)arg10 lfQuality:(int)arg11 pitch:(int)arg12 family:(int)arg13 lfFaceName:(id)arg14 elfFullName:(id)arg15 elfStyle:(id)arg16 elfVersion:(unsigned int)arg17 elfStyleSize:(unsigned int)arg18 elfMatch:(unsigned int)arg19 elfVendorId:(unsigned int)arg20 elfCulture:(unsigned int)arg21 ;
-(id)initWithFeatures:(int)arg0 lfWidth:(int)arg1 lfEscapement:(int)arg2 lfOrientation:(int)arg3 lfWeight:(int)arg4 lfItalic:(BOOL)arg5 lfUnderline:(BOOL)arg6 lfStrikeOut:(BOOL)arg7 lfCharSet:(int)arg8 lfOutPrecision:(int)arg9 lfClipPrecision:(unsigned char)arg10 lfQuality:(int)arg11 pitch:(int)arg12 family:(int)arg13 lfFaceName:(id)arg14 ;
-(id)initWithStockFont:(int)arg0 ;
-(id)stringWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(int)getCharset;
-(int)selectInto:(id)arg0 ;
-(struct CGRect )textExtent:(id)arg0 options:(int)arg1 in_spacingValues:(*int)arg2 in_count:(int)arg3 ;


@end


#endif