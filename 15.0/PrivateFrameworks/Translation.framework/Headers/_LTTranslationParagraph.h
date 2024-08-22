// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTTRANSLATIONPARAGRAPH_H
#define _LTTRANSLATIONPARAGRAPH_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTTranslationParagraph : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *spans; // ivar: _spans
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 text:(id)arg1 spans:(id)arg2 ;
-(id)splitIntoSentences;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif