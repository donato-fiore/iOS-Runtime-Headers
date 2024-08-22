// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPLISTLABEL_H
#define TSWPLISTLABEL_H

@class TSDImageProvider, NSString, TSDShadow;

#import <Foundation/Foundation.h>


@interface TSWPListLabel : NSObject

@property (readonly, nonatomic) CGFloat ascent; // ivar: _ascent
@property (readonly, nonatomic) CGFloat baselineOffset; // ivar: _baselineOffset
@property (readonly, nonatomic) CGFloat descent; // ivar: _descent
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) TSDImageProvider *imageProvider; // ivar: _imageProvider
@property (nonatomic) BOOL isLabelRTL; // ivar: _isLabelRTL
@property (readonly, nonatomic) BOOL isLabelTateChuYoko; // ivar: _isLabelTateChuYoko
@property (readonly, nonatomic) *__CTFont labelFont;
@property (nonatomic) CGFloat labelIndent; // ivar: _labelIndent
@property (readonly, nonatomic) NSString *labelString; // ivar: _labelString
@property (readonly, nonatomic) NSUInteger labelType; // ivar: _labelType
@property (nonatomic) CGFloat labelTypographicExtent; // ivar: _labelTypographicExtent
@property (readonly, nonatomic) NSUInteger listNumber; // ivar: _listNumber
@property (readonly, nonatomic) CGSize naturalImageSize;
@property (retain, nonatomic) TSDShadow *shadow; // ivar: _shadow
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) *__CTLine textLine; // ivar: _textLine
@property (readonly, nonatomic) CGFloat width;


-(BOOL)isEqualToListLabel:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 imageProvider:(id)arg1 size:(struct CGSize )arg2 baselineOffset:(CGFloat)arg3 ;
-(id)initWithType:(NSUInteger)arg0 labelString:(id)arg1 textLine:(struct __CTLine *)arg2 listNumber:(NSUInteger)arg3 isTateChuYoko:(BOOL)arg4 baselineOffset:(CGFloat)arg5 ;
-(void)dealloc;


@end


#endif