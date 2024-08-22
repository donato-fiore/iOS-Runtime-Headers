// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QPQUERYPARSERMANAGER_H
#define QPQUERYPARSERMANAGER_H

@class NSDate, NSLocale, NSArray, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "QPDataDetectorsParser.h"

@interface QPQueryParserManager : NSObject {
    *void _parser;
    QPDataDetectorsParser *_dateParser;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_originalDate;
    NSLocale *_originalLocale;
    NSArray *_originalPreferredLocales;
    NSURL *_originalCustomResourceDirectory;
}




+(id)availableLanguages;
+(id)defaultManager;
+(id)notesManager;
+(id)photosParserManager;
+(id)remindersParserManager;
+(id)spotlightManager;
-(BOOL)available;
-(id)dateFromParseAttributes:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(void)dealloc;
-(void)enumerateDateParseResultsForString:(id)arg0 options:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateParseResultsForStartDateString:(id)arg0 startDateContext:(id)arg1 endDateString:(id)arg2 endDateContext:(id)arg3 options:(id)arg4 withBlock:(id)arg5 ;
-(void)enumerateParseResultsForString:(id)arg0 options:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateSpotlightResultsForString:(id)arg0 options:(id)arg1 withBlock:(id)arg2 ;
-(void)reset;
-(void)updateWithOptions:(id)arg0 ;


@end


#endif