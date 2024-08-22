// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONAVDANALYTICSMANAGER_H
#define GEONAVDANALYTICSMANAGER_H

@protocol GEONavdAnalyticsReporter;

#import <Foundation/Foundation.h>


@interface GEONavdAnalyticsManager : NSObject

@property (retain, nonatomic) NSObject<GEONavdAnalyticsReporter> *analyticsReporter; // ivar: _analyticsReporter


+(id)sharedManager;


@end


#endif