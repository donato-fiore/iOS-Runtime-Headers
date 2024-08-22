// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTRNLTEXTSLOTPARSER_H
#define TTRNLTEXTSLOTPARSER_H

@class NSLocale;

#import <Foundation/Foundation.h>


@interface TTRNLTextSlotParser : NSObject

@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) *void parser; // ivar: _parser


-(id)initWithLocale:(id)arg0 now:(id)arg1 ;
-(id)parseString:(id)arg0 referenceTimeZone:(id)arg1 ;
-(void)dealloc;


@end


#endif