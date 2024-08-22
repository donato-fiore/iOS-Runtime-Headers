// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PRMONOGRAMFONTSPEC_H
#define _PRMONOGRAMFONTSPEC_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PRMonogramFontSpec : NSObject

@property (readonly, nonatomic) CGFloat baseSize; // ivar: _baseSize
@property (readonly, nonatomic) NSString *fontName; // ivar: _fontName
@property (readonly, nonatomic) CGFloat tracking; // ivar: _tracking


+(id)specForFontWithName:(id)arg0 baseSize:(CGFloat)arg1 tracking:(CGFloat)arg2 ;


@end


#endif