// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRCWEBDATETIMEPARSER_H
#define SCRCWEBDATETIMEPARSER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SCRCWebDateTimeParser : NSObject {
    NSMutableDictionary *_expressions;
    NSMutableDictionary *_dateFormats;
}




+(id)sharedInstance;
-(id)_cachedDateFormatterForFormat:(id)arg0 ;
-(id)_expressionForRule:(id)arg0 ;
-(id)_handleDatesAndTimes:(id)arg0 ;
-(id)_handleDuration:(id)arg0 ;
-(id)_handleTimes:(id)arg0 ;
-(id)init;
-(id)spokenStringForDateTimeAttribute:(id)arg0 ;


@end


#endif