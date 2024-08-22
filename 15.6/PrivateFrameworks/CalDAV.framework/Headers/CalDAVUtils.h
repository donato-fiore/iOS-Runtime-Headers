// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVUTILS_H
#define CALDAVUTILS_H


#import <Foundation/Foundation.h>


@interface CalDAVUtils : NSObject



+(id)dropBoxLocationForUID:(id)arg0 dropBoxPath:(id)arg1 ;
+(id)headersFromHeaders:(id)arg0 replacingPreconditionsWithScheduleTag:(id)arg1 ;
+(id)stringFromUIDWithPathSafeCharacters:(id)arg0 ;


@end


#endif