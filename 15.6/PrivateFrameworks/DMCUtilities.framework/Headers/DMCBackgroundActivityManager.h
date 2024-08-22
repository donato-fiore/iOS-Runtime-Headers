// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCBACKGROUNDACTIVITYMANAGER_H
#define DMCBACKGROUNDACTIVITYMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DMCBackgroundActivityManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *activities; // ivar: _activities


+(id)sharedInstance;
+(void)cancelActivity:(id)arg0 ;
+(void)scheduleOneShotActivity:(id)arg0 interval:(CGFloat)arg1 gracePeriod:(CGFloat)arg2 callback:(id)arg3 ;
-(id)initPrivate;


@end


#endif