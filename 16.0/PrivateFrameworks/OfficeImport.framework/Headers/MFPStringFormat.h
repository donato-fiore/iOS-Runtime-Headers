// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPSTRINGFORMAT_H
#define MFPSTRINGFORMAT_H


#import <Foundation/Foundation.h>


@interface MFPStringFormat : NSObject {
    int mAlignment;
    unsigned short mDigitSubstitutionLanguage;
    int mDigitSubstitutionMethod;
    unsigned int mFormatFlags;
    int mHotkeyPrefix;
    int mLineAlignment;
    float mFirstTabOffset;
    int mTabStopCount;
    *float mTabStops;
    int mTrimming;
}




-(*float)tabStops;
-(float)firstTabOffset;
-(id)init;
-(int)alignment;
-(int)digitSubstitutionMethod;
-(int)hotkeyPrefix;
-(int)lineAlignment;
-(int)tabStopCount;
-(int)trimming;
-(unsigned int)formatFlags;
-(unsigned short)digitSubstitutionLanguage;
-(void)dealloc;
-(void)setAlignment:(int)arg0 ;
-(void)setDigitSubstitutionLanguage:(unsigned short)arg0 ;
-(void)setDigitSubstitutionMethod:(int)arg0 ;
-(void)setFirstTabOffset:(float)arg0 ;
-(void)setFormatFlags:(unsigned int)arg0 ;
-(void)setHotkeyPrefix:(int)arg0 ;
-(void)setLineAlignment:(int)arg0 ;
-(void)setTabStops:(*float)arg0 count:(int)arg1 ;
-(void)setTrimming:(int)arg0 ;


@end


#endif