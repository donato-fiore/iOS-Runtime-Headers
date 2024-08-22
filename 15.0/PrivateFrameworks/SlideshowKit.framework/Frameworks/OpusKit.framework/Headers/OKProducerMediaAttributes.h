// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKPRODUCERMEDIAATTRIBUTES_H
#define OKPRODUCERMEDIAATTRIBUTES_H

@class NSAttributedString, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface OKProducerMediaAttributes : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (nonatomic) CGPoint offset2; // ivar: _offset2
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGFloat scale2; // ivar: _scale2
@property (retain, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)hasText;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)clearText;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithText:(id)arg0 ;


@end


#endif