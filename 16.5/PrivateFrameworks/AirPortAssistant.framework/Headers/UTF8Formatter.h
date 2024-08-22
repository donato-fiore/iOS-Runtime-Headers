// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UTF8FORMATTER_H
#define UTF8FORMATTER_H



#import "APFormatter.h"

@interface UTF8Formatter : APFormatter {
    NSUInteger _maxByteCount;
}




+(id)afpFormatter:(NSUInteger)arg0 ;
+(id)afpSet;
+(id)utf8Formatter;
+(id)utf8Formatter:(NSUInteger)arg0 ;
+(id)utf8FormatterWithMaxByteCount:(NSUInteger)arg0 maxLength:(NSUInteger)arg1 ;
-(BOOL)isPartialStringValid:(id)arg0 newEditingString:(*id)arg1 errorDescription:(*id)arg2 ;
-(NSUInteger)maxByteCount;
-(id)initAFPFormatterWithLength:(NSUInteger)arg0 ;
-(id)initWithMaxByteCount:(NSUInteger)arg0 maxLength:(NSUInteger)arg1 ;
-(void)setMaxByteCount:(NSUInteger)arg0 ;


@end


#endif