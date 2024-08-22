// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFEEDBACKGENERATORCONFIGURATION_H
#define _UIFEEDBACKGENERATORCONFIGURATION_H

@class NSString, NSArray, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIFeedbackGeneratorConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSString *_stats_key; // ivar: __stats_key
@property (nonatomic) NSInteger activationStyle; // ivar: _activationStyle
@property (copy, nonatomic) Class clientClass; // ivar: _clientClass
@property (readonly, nonatomic) BOOL defaultEnabled;
@property (readonly, nonatomic) NSString *descriptionKey;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSArray *feedbackKeyPaths;
@property (nonatomic) NSInteger outputMode; // ivar: _outputMode
@property (copy, nonatomic) id *preparationBlock; // ivar: _preparationBlock
@property (nonatomic) NSInteger requiredSupportLevel; // ivar: _requiredSupportLevel
@property (nonatomic) BOOL settingsEnabled; // ivar: _settingsEnabled
@property (nonatomic, getter=isSetup) BOOL setup; // ivar: _setup
@property (copy, nonatomic) NSString *usage; // ivar: _usage
@property (readonly, nonatomic) NSSet *usedFeedbacks; // ivar: _usedFeedbacks


+(id)_configurationWithKey:(id)arg0 preparationBlock:(id)arg1 ;
+(id)_configurationWithKey:(id)arg0 requiredSupportLevel:(NSInteger)arg1 preparationBlock:(id)arg2 ;
+(id)_disabledConfiguration;
+(id)defaultConfiguration;
-(BOOL)_setupIfNecessary;
-(BOOL)_shouldEnable;
-(BOOL)isEqual:(id)arg0 ;
-(id)_updateFeedbackForOutputMode:(id)arg0 ;
-(id)_updateFeedbacksForOutputMode:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)tweakedConfigurationForCaller:(id)arg0 usage:(id)arg1 ;
-(id)tweakedConfigurationForClass:(Class)arg0 usage:(id)arg1 ;
-(void)_preferencesUpdated:(id)arg0 ;
-(void)_updateEnabled;
-(void)dealloc;


@end


#endif