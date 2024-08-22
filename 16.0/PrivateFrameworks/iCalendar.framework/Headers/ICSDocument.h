// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSDOCUMENT_H
#define ICSDOCUMENT_H


#import <Foundation/Foundation.h>

#import "ICSCalendar.h"

@interface ICSDocument : NSObject {
    ICSCalendar *_calendar;
}




+(int)ICSChecksumVersionSpecifiedInOptions:(NSUInteger)arg0 ;
+(void)suppressParserSyntaxErrorLogging;
-(BOOL)validate:(*id)arg0 ;
-(id)ICSChecksumForVersion:(int)arg0 ;
-(id)ICSChecksumStringForVersion:(int)arg0 ;
-(id)ICSCompressedDataWithOptions:(NSUInteger)arg0 ;
-(id)ICSDataWithOptions:(NSUInteger)arg0 ;
-(id)ICSStringWithOptions:(NSUInteger)arg0 ;
-(id)calendar;
-(id)initWithCalendar:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithData:(id)arg0 encoding:(NSUInteger)arg1 options:(NSUInteger)arg2 delegate:(id)arg3 error:(*id)arg4 ;
-(id)initWithData:(id)arg0 encoding:(NSUInteger)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)initWithData:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithICSString:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)validateParsedCalendar:(id)arg0 ;


@end


#endif