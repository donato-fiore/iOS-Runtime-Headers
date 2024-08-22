// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDSECURECANDIDATERENDERTRAITS_H
#define TIKEYBOARDSECURECANDIDATERENDERTRAITS_H

@class NSDictionary, NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIKeyboardSecureCandidateTextTraits.h"
#import "TIKeyboardSecureCandidateLayoutTraits.h"
#import "TIKeyboardSecureCandidateRGBColor.h"

@interface TIKeyboardSecureCandidateRenderTraits : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger cellRenderingStyle; // ivar: _cellRenderingStyle
@property (copy, nonatomic) NSDictionary *cellWidthOptions; // ivar: _cellWidthOptions
@property (nonatomic) CGFloat dividerLineWidth; // ivar: _dividerLineWidth
@property (copy, nonatomic) NSString *fontName; // ivar: _fontName
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTextTraits; // ivar: _headerTextTraits
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTextTraits; // ivar: _inputTextTraits
@property (nonatomic) BOOL isCandidateUI; // ivar: _isCandidateUI
@property (retain, nonatomic) TIKeyboardSecureCandidateLayoutTraits *layoutTraits; // ivar: _layoutTraits
@property (nonatomic) NSInteger maxCellCount; // ivar: _maxCellCount
@property (copy, nonatomic) NSString *prefixText; // ivar: _prefixText
@property (copy, nonatomic) NSArray *resultCountToSingleCellWidth; // ivar: _resultCountToSingleCellWidth
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (nonatomic) NSInteger sharedCellCount; // ivar: _sharedCellCount
@property (nonatomic) CGFloat singleCellHeight; // ivar: _singleCellHeight
@property (nonatomic) CGFloat singleCellVerticalPadding; // ivar: _singleCellVerticalPadding
@property (nonatomic) CGFloat singleCellWidth;
@property (copy, nonatomic) NSString *suffixText; // ivar: _suffixText
@property (retain, nonatomic) TIKeyboardSecureCandidateRGBColor *textColor; // ivar: _textColor


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif