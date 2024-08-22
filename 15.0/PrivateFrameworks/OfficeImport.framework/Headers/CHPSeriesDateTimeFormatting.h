// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHPSERIESDATETIMEFORMATTING_H
#define CHPSERIESDATETIMEFORMATTING_H



#import "EDProcessor.h"

@interface CHPSeriesDateTimeFormatting : EDProcessor



-(BOOL)isDateTimeFomrattingInData:(id)arg0 ;
-(BOOL)isDateTimeFormattingInContentFormatString:(id)arg0 edCell:(struct EDCellHeader *)arg1 ;
-(BOOL)isObjectSupported:(id)arg0 ;
-(void)applyProcessorToObject:(id)arg0 sheet:(id)arg1 ;


@end


#endif