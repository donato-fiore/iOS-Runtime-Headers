// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCWIDGETCONFIG_H
#define FCWIDGETCONFIG_H

@class NSDictionary, NTPBWidgetConfig;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FCWidgetConfig : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDictionary *configDictionary; // ivar: _configDictionary
@property (readonly, nonatomic) NSInteger forYouBackgroundMinimumUpdateInterval;
@property (readonly, nonatomic) NSInteger minimumArticleExposureDurationToBePreseen;
@property (readonly, nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;
@property (readonly, nonatomic) CGFloat parsecPopulationCeiling;
@property (readonly, nonatomic) CGFloat parsecPopulationFloor;
@property (copy, nonatomic) NTPBWidgetConfig *pbWidgetConfig; // ivar: _pbWidgetConfig
@property (readonly, nonatomic) NSInteger smallWidgetSystemHoneymoonDuration;
@property (readonly, nonatomic) NSInteger smallWidgetSystemReloadInterval;
@property (readonly, nonatomic) NSInteger smallWidgetSystemReloadIntervalHoneymoon;
@property (readonly, nonatomic) NSInteger smallWidgetSystemReloadJitterMax;
@property (readonly, nonatomic) NSInteger smallWidgetSystemReloadJitterMaxHoneymoon;
@property (readonly, nonatomic) NSInteger widgetSystemHoneymoonDuration;
@property (readonly, nonatomic) NSInteger widgetSystemReloadInterval;
@property (readonly, nonatomic) NSInteger widgetSystemReloadIntervalHoneymoon;
@property (readonly, nonatomic) NSInteger widgetSystemReloadJitterMax;
@property (readonly, nonatomic) NSInteger widgetSystemReloadJitterMaxHoneymoon;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithWidgetConfig:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif