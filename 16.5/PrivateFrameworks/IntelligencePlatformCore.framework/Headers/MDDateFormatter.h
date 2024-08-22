// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDDATEFORMATTER_H
#define MDDATEFORMATTER_H

@class NSISO8601DateFormatter;

#import <Foundation/Foundation.h>


@interface MDDateFormatter : NSObject {
    NSISO8601DateFormatter *_formatter;
}




-(id)init;
-(id)iso8601StringPlusPrecisionForDate:(id)arg0 isAllDay:(BOOL)arg1 ;


@end


#endif