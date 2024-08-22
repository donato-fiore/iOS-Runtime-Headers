// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTTRANSLATIONRESULT_H
#define _LTTRANSLATIONRESULT_H

@class NSArray, NSString, NSLocale;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTTranslationResult : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *alignments; // ivar: _alignments
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isFinal; // ivar: _isFinal
@property (copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) NSInteger route; // ivar: _route
@property (copy, nonatomic) NSString *sanitizedSourceString; // ivar: _sanitizedSourceString
@property (copy, nonatomic) NSString *sourceString; // ivar: _sourceString
@property (copy, nonatomic) NSArray *translations; // ivar: _translations


+(BOOL)supportsSecureCoding;
+(id)passthroughResultWithString:(id)arg0 sanitizedString:(id)arg1 locale:(id)arg2 ;
+(id)resultWithLocale:(id)arg0 translations:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOspreyBatchResponse:(id)arg0 ;
-(id)initWithOspreyResponse:(id)arg0 ;
-(id)initWithOspreySpeechTranslationMTResponse:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateAlignmentWithSourceSpan:(id)arg0 targetSpan:(id)arg1 ;


@end


#endif