// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTTRANSLATIONTOKEN_H
#define _LTTRANSLATIONTOKEN_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTTranslationToken : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOspreyToken:(id)arg0 ;
-(id)initWithText:(id)arg0 confidence:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif