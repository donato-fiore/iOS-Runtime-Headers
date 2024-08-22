// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALMIGRATIONUTILITIES_H
#define CALMIGRATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface CalMigrationUtilities : NSObject



+(id)calendarDirectoryForHomeDirectory:(id)arg0 ;
+(id)homeRelativePathForURL:(id)arg0 inCalendarDirectory:(id)arg1 ;
+(id)subdirectoriesInDirectory:(id)arg0 withPrivacySafePathProvider:(id)arg1 error:(*id)arg2 ;
+(id)validatedCalendarDirectoryForHomeDirectory:(id)arg0 ;
+(void)enumerateSelfAndDetachedEventsWithEvent:(*void)arg0 usingBlock:(id)arg1 ;


@end


#endif