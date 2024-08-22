// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDDATECOMPONENTSPARSER_H
#define CNVCARDDATECOMPONENTSPARSER_H

@class NSCalendar;

#import <Foundation/Foundation.h>

#import "CNVCardDateComponentsFormatter.h"

@interface CNVCardDateComponentsParser : NSObject {
    CNVCardDateComponentsFormatter *_formatter;
    NSCalendar *_gregorianCalendar;
}




-(id)dateComponentsFromString:(id)arg0 calendarIdentifier:(id)arg1 ;
-(id)dateComponentsFromString:(id)arg0 omitYear:(NSInteger)arg1 ;
-(id)dateComponentsWithParser:(id)arg0 ;
-(id)gregorianDateComponentsWithParser:(id)arg0 ;
-(id)init;


@end


#endif