// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKWORLDCLOCKGRAPHICCIRCULARVIEWCONFIGURATION_H
#define NTKWORLDCLOCKGRAPHICCIRCULARVIEWCONFIGURATION_H

@class NSString, NSDate, NSTimeZone, CLKUIAlmanacTransitInfo;

#import <Foundation/Foundation.h>


@interface NTKWorldClockGraphicCircularViewConfiguration : NSObject

@property (readonly, nonatomic) BOOL inTritium; // ivar: _inTritium
@property (readonly, nonatomic) NSString *labelText; // ivar: _labelText
@property (readonly, nonatomic) NSDate *overrideDate; // ivar: _overrideDate
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly, nonatomic) CLKUIAlmanacTransitInfo *transitInfo; // ivar: _transitInfo


-(id)initWithTimeZone:(id)arg0 labelText:(id)arg1 transitInfo:(id)arg2 inTritium:(BOOL)arg3 overrideDate:(id)arg4 ;


@end


#endif