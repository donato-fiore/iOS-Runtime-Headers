// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMTRANSLATEDTEXT_H
#define AXMTRANSLATEDTEXT_H

@class NSLocale, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMTranslatedText : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (nonatomic, getter=isLowConfidence) BOOL lowConfidence; // ivar: _lowConfidence
@property (retain, nonatomic) NSLocale *targetLocale; // ivar: _targetLocale
@property (retain, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
+(id)text:(id)arg0 confidence:(CGFloat)arg1 isLowConfidence:(BOOL)arg2 targetLocale:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif