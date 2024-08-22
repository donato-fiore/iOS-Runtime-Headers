// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMULTISTACKEDLABELSOURCE_H
#define PKMULTISTACKEDLABELSOURCE_H

@class UIFont, NSString, UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKMultiStackedLabelSource : NSObject <NSCopying>



@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithText:(id)arg0 ;


@end


#endif