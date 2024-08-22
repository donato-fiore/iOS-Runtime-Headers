// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRLTTRANSLATIONPARAMETERS_H
#define BRLTTRANSLATIONPARAMETERS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRLTTranslationParameters : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic, getter=isPartial) BOOL partial; // ivar: _partial
@property (readonly, nonatomic) _NSRange textPositionsRange; // ivar: _textPositionsRange
@property (readonly, nonatomic) BOOL useTechnicalTableIfPossible; // ivar: _useTechnicalTableIfPossible


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 mode:(NSUInteger)arg1 partial:(BOOL)arg2 useTechnicalTable:(BOOL)arg3 textPositionsRange:(struct _NSRange )arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif