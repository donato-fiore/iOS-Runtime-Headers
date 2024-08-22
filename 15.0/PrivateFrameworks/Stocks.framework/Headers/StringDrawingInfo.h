// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STRINGDRAWINGINFO_H
#define STRINGDRAWINGINFO_H

@class UIColor, UIFont, NSString;

#import <Foundation/Foundation.h>


@interface StringDrawingInfo : NSObject

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) NSString *string; // ivar: _string


+(id)stringDrawingInfoWithString:(id)arg0 color:(id)arg1 font:(id)arg2 size:(struct CGSize )arg3 ;


@end


#endif