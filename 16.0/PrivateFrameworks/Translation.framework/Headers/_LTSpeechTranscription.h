// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTSPEECHTRANSCRIPTION_H
#define _LTSPEECHTRANSCRIPTION_H

@class NSString, NSLocale;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTSpeechTranscription : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (copy, nonatomic) NSString *formattedString; // ivar: _formattedString
@property (copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic, getter=isLowConfidence) BOOL lowConfidence; // ivar: _lowConfidence
@property (nonatomic) CGFloat maxConfidence; // ivar: _maxConfidence
@property (nonatomic) CGFloat minConfidence; // ivar: _minConfidence
@property (copy, nonatomic) NSString *sanitizedFormattedString; // ivar: _sanitizedFormattedString


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFormattedString:(id)arg0 locale:(id)arg1 confidence:(CGFloat)arg2 minConfidence:(CGFloat)arg3 maxConfidence:(CGFloat)arg4 ;
-(id)initWithRecognitionChoice:(id)arg0 inSausage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif