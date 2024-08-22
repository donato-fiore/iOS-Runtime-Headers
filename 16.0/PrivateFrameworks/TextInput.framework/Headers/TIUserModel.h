// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIUSERMODEL_H
#define TIUSERMODEL_H

@class NSMutableDictionary, NSDictionary, NSArray, NSString, NSDate;
@protocol TIUserModeling, TIMetricProviding, TIUserModelDataStoring, TIUserModelConfigurationDelegate;

#import <Foundation/Foundation.h>


@interface TIUserModel : NSObject <TIUserModeling, TIMetricProviding>

 {
    id<TIUserModelDataStoring> *_userModelStore;
    NSMutableDictionary *_durableCounters;
    NSMutableDictionary *_userModelValuesCollection;
    NSDictionary *_settingsDictionary;
    CGFloat _timeOfLastPersist;
}


@property (readonly, nonatomic) NSDictionary *cachedSettingsDictionary;
@property (weak, nonatomic) NSObject<TIUserModelConfigurationDelegate> *configurationDelegate; // ivar: _configurationDelegate
@property (readonly, nonatomic) NSArray *contexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL explicitTearDown; // ivar: _explicitTearDown
@property (readonly, nonatomic) NSDate *fromDate; // ivar: _fromDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *inputMode; // ivar: _inputMode
@property (retain, nonatomic) NSDate *loadedDate; // ivar: _loadedDate
@property (readonly) Class superclass;
@property BOOL userModelRateLimitingDisabled; // ivar: _userModelRateLimitingDisabled
@property (copy, nonatomic) NSArray *weeklyMetricKeys; // ivar: _weeklyMetricKeys


-(BOOL)persistForDate:(id)arg0 ;
-(id)initWithInputMode:(id)arg0 userModelDataStore:(id)arg1 ;
-(id)initWithInputMode:(id)arg0 userModelDataStore:(id)arg1 weeklyMetricKeys:(id)arg2 fromDate:(id)arg3 explicitTearDown:(BOOL)arg4 ;
-(id)populateSettingsDictionary;
-(id)valuesFromContext:(id)arg0 ;
-(int)valueForDurableKey:(id)arg0 ;
-(void)addDoubleToTransientCounter:(CGFloat)arg0 forKey:(id)arg1 andCandidateLength:(int)arg2 andContext:(id)arg3 ;
-(void)addIntegerToTransientCounter:(int)arg0 forKey:(id)arg1 andCandidateLength:(int)arg2 andContext:(id)arg3 ;
-(void)addToDurableCounter:(int)arg0 forKey:(id)arg1 ;
-(void)configureDurableCounterForName:(id)arg0 ;
-(void)configureDurableCounters;
-(void)dealloc;
-(void)doLoad;
-(void)loadIfNecessary;
-(void)loadSettings;
-(void)tearDown;
-(void)trackPowerLogIfNecessary;


@end


#endif