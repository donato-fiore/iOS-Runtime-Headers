// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMULTISTACKEDLABELSOURCE_H
#define PKMULTISTACKEDLABELSOURCE_H

@class NSString, UIFont, UIImage, UIColor;
@protocol NSCopying, PKIdentifiable;

#import <Foundation/Foundation.h>


@interface PKMultiStackedLabelSource : NSObject <NSCopying, PKIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithText:(id)arg0 ;


@end


#endif