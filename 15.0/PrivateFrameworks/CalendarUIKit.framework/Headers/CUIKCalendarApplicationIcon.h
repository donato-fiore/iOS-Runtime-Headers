// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKCALENDARAPPLICATIONICON_H
#define CUIKCALENDARAPPLICATIONICON_H


#import <Foundation/Foundation.h>


@interface CUIKCalendarApplicationIcon : NSObject



+(BOOL)formatSupportsDynamicIcon:(int)arg0 ;
+(CGFloat)_imageScaleForApplicationIconFormat:(int)arg0 ;
+(NSInteger)_iconDateNameFormatTypeForDate:(id)arg0 calendar:(id)arg1 format:(int)arg2 ;
+(NSInteger)_translateUIApplicationIconFormat:(int)arg0 ;
+(NSInteger)dynamicIconFormat:(int)arg0 ;
+(id)_dateNameFromDate:(id)arg0 calendar:(id)arg1 type:(NSInteger)arg2 style:(NSInteger)arg3 ;
+(id)_dateNameFromDateComponents:(id)arg0 type:(NSInteger)arg1 style:(NSInteger)arg2 ;
+(id)_dayNumberStringFromDate:(id)arg0 calendar:(id)arg1 ;
+(id)_dayNumberStringFromDateComponents:(id)arg0 ;
+(id)_iconImageWithFormat:(int)arg0 square:(BOOL)arg1 outline:(BOOL)arg2 drawBlock:(id)arg3 ;
+(id)_whiteImage;
+(id)croppedIconImage:(id)arg0 format:(int)arg1 ;
+(id)getMaskedIconImageWithFormat:(int)arg0 imageScale:(CGFloat)arg1 ;
+(id)getUnmaskedIconImage:(int)arg0 ;
+(id)iconImageWithDate:(id)arg0 calendar:(id)arg1 format:(int)arg2 ;
+(id)iconImageWithDate:(id)arg0 calendar:(id)arg1 format:(int)arg2 outline:(BOOL)arg3 ;
+(id)iconImageWithDateComponents:(id)arg0 dateNameFormatType:(NSInteger)arg1 format:(int)arg2 ;
+(int)_iconVariantForFormat:(int)arg0 scale:(CGFloat)arg1 outline:(BOOL)arg2 ;
+(int)iconVersion;
+(void)_drawGridInContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 ;
// +(void)_drawIconInContext:(struct CGContext *)arg0 imageSize:(struct CGSize )arg1 iconBase:(id)arg2 calendar:(id)arg3 dayNumberString:(id)arg4 dateNameBlock:(id)arg5 dateNameFormatType:(unk)arg6 format:(NSInteger)arg7 showGrid:(NSInteger)arg8  ;
+(void)_fillContextWithWhiteBackgroundIfNeededForFormat:(NSInteger)arg0 context:(struct CGContext *)arg1 frame:(struct CGRect )arg2 ;
+(void)drawIconInContext:(struct CGContext *)arg0 imageSize:(struct CGSize )arg1 iconBase:(id)arg2 date:(id)arg3 calendar:(id)arg4 format:(int)arg5 ;
+(void)drawIconInContext:(struct CGContext *)arg0 imageSize:(struct CGSize )arg1 iconBase:(id)arg2 dateComponents:(id)arg3 dateNameFormatType:(NSInteger)arg4 format:(NSInteger)arg5 showGrid:(BOOL)arg6 ;


@end


#endif