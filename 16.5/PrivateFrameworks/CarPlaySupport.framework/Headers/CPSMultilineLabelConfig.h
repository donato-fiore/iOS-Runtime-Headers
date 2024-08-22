// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSMULTILINELABELCONFIG_H
#define CPSMULTILINELABELCONFIG_H

@class NSAttributedString, UIFont, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CPSMultilineLabelConfig : NSObject <NSCopying>



@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) NSUInteger lineCount; // ivar: _lineCount
@property (copy, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLabelConfig:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif