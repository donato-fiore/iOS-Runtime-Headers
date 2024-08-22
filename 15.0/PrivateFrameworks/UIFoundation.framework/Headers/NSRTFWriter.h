// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSRTFWRITER_H
#define NSRTFWRITER_H

@class NSMutableData, NSAttributedString, NSFileWrapper, NSMutableDictionary, NSMutableArray, NSDictionary, NSMapTable;

#import <Foundation/Foundation.h>


@interface NSRTFWriter : NSObject {
    NSMutableData *_output;
    NSAttributedString *_attrString;
    NSUInteger _attrStringLength;
    NSFileWrapper *_document;
    NSMutableDictionary *_fontNames;
    NSMutableDictionary *_fontObjects;
    NSMutableDictionary *_colors;
    NSMutableArray *_listRanges;
    id *_curFont;
    id *_curForegroundColor;
    id *_curBackgroundColor;
    id *_curParagraphStyle;
    id *_curKern;
    id *_curBaselineOffset;
    id *_curSuperscript;
    id *_curUnderlineStyle;
    int _curTraits;
    unsigned int _curEncoding;
    ? _rwFlags;
    CGFloat _rightMargin;
    NSDictionary *_docAttrs;
    *void _layoutSections;
    NSMapTable *_attachmentData;
    NSInteger _textScalingConversionSource;
    NSInteger _textScalingConversionTarget;
}




+(void)initialize;
-(void)dealloc;


@end


#endif