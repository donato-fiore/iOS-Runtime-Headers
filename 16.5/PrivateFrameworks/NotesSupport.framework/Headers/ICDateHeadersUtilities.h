// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDATEHEADERSUTILITIES_H
#define ICDATEHEADERSUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICDateHeadersUtilities : NSObject



+(BOOL)isShowingQueryDateHeadersForDateHeadersType:(int)arg0 ;
+(BOOL)showsQueryDateHeaders;
+(BOOL)supportsQueryDateHeaders;
+(id)actionItemTitleWithDateHeadersType:(int)arg0 ;
+(id)menuTitle;
+(id)stringForDateHeadersType:(int)arg0 ;
+(int)defaultDateHeadersType;
+(int)queryDateHeadersType;
+(void)clearCache;
+(void)setDateHeadersUserPreference:(int)arg0 forKey:(id)arg1 postNotificationName:(id)arg2 ;
+(void)setDefaultDateHeadersType:(int)arg0 ;
+(void)setQueryDateHeadersType:(int)arg0 ;


@end


#endif