// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNVCARDPHOTOPARSER_H
#define CNVCARDPHOTOPARSER_H


#import <Foundation/Foundation.h>


@interface CNVCardPHOTOParser : NSObject



+(id)clipRectInfoFromString:(id)arg0 ;
+(id)parseClipRectsWithParser:(id)arg0 ;
+(void)parseBase64:(BOOL)arg0 parser:(id)arg1 callback:(id)arg2 ;


@end


#endif