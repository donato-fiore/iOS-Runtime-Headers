// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKDATETIMEFORMAT_H
#define TSKDATETIMEFORMAT_H

@class NSString;
@protocol NSCopying;


#import "TSKFormat.h"

@interface TSKDateTimeFormat : TSKFormat <NSCopying>



@property (readonly, nonatomic) NSString *formatString; // ivar: _formatString


+(id)defaultDateOnlyShortFormatForLocale:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asDateTimeFormat;
-(id)initWithFormatString:(id)arg0 ;
-(id)initWithFormatType:(unsigned int)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)stringFromDate:(id)arg0 locale:(id)arg1 ;


@end


#endif