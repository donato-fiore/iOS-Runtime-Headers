// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTFONT_H
#define TTFONT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TTFont : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned int fontHints; // ivar: _fontHints
@property (readonly, nonatomic) NSString *fontName; // ivar: _fontName
@property (retain, nonatomic) id *nativeFont; // ivar: _nativeFont
@property (readonly, nonatomic) CGFloat pointSize; // ivar: _pointSize


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithName:(id)arg0 size:(CGFloat)arg1 hints:(unsigned int)arg2 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif