// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDNOTIFICATIONENGINECONFIGURATION_H
#define HDNOTIFICATIONENGINECONFIGURATION_H

@class NSCalendar, NSDate;

#import <Foundation/Foundation.h>


@interface HDNotificationEngineConfiguration : NSObject

@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, copy, nonatomic) NSDate *endGenerationDate; // ivar: _endGenerationDate
@property (readonly, copy, nonatomic) NSDate *startGenerationDate; // ivar: _startGenerationDate


-(id)init;
-(id)initWithCalendar:(id)arg0 startGenerationDate:(id)arg1 endGenerationDate:(id)arg2 ;


@end


#endif