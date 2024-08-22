// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EBFONTTABLE_H
#define EBFONTTABLE_H


#import <Foundation/Foundation.h>


@interface EBFontTable : NSObject



+(NSUInteger)edFontIndexFromXlFontIndex:(unsigned int)arg0 ;
+(unsigned int)xlFontIndexFromEDFontIndex:(NSUInteger)arg0 ;
+(void)readWithState:(id)arg0 ;


@end


#endif