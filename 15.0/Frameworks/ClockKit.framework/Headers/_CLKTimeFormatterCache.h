// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CLKTIMEFORMATTERCACHE_H
#define _CLKTIMEFORMATTERCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _CLKTimeFormatterCache : NSObject {
    NSMutableDictionary *_timeOnlyFormatters;
    NSMutableDictionary *_timeAndDesignatorFormatters;
    NSMutableDictionary *_timeAndDesignatorFormattersSuppressingWhitespace;
}




+(id)sharedInstance;
+(id)timeZoneName:(id)arg0 ;
-(id)init;
-(id)timeAndDesignatorFormatterForTimeZone:(id)arg0 suppressWhitespace:(BOOL)arg1 forcesLatinNumbers:(BOOL)arg2 ;
-(id)timeOnlyFormatterForTimeZone:(id)arg0 hasSeconds:(BOOL)arg1 forcesLatinNumbers:(BOOL)arg2 ;
-(void)_invalidateFormatters;
-(void)dealloc;


@end


#endif