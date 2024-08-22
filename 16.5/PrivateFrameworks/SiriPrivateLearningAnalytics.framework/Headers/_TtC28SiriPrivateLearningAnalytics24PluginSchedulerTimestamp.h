// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC28SIRIPRIVATELEARNINGANALYTICS24PLUGINSCHEDULERTIMESTAMP_H
#define _TTC28SIRIPRIVATELEARNINGANALYTICS24PLUGINSCHEDULERTIMESTAMP_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC28SiriPrivateLearningAnalytics24PluginSchedulerTimestamp : NSObject <NSSecureCoding>

 {
    ? scheduler;
    ? timestamp;
}


@property (nonatomic, readonly) NSString *debugDescription;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif