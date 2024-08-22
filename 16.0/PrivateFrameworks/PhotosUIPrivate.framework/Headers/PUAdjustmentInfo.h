// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUADJUSTMENTINFO_H
#define PUADJUSTMENTINFO_H

@class NSString;
@protocol PUAdjustmentCustomBehavior;

#import <Foundation/Foundation.h>


@interface PUAdjustmentInfo : NSObject

@property (retain, nonatomic) NSString *adjustmentKey; // ivar: _adjustmentKey
@property (retain, nonatomic) NSString *attributeKey; // ivar: _attributeKey
@property (nonatomic) CGFloat baseLevel; // ivar: _baseLevel
@property (nonatomic) CGFloat currentLevel; // ivar: _currentLevel
@property (retain, nonatomic) NSObject<PUAdjustmentCustomBehavior> *customSettingDelegate; // ivar: _customSettingDelegate
@property (nonatomic) CGFloat defaultLevel; // ivar: _defaultLevel
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSString *iconName; // ivar: _iconName
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat identityLevel; // ivar: _identityLevel
@property (nonatomic) CGFloat lastAdjustedLevel; // ivar: _lastAdjustedLevel
@property (retain, nonatomic) NSString *localizedActionName; // ivar: _localizedActionName
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (retain, nonatomic) NSString *localizedSectionName; // ivar: _localizedSectionName
@property (nonatomic) CGFloat maximumLevel; // ivar: _maximumLevel
@property (nonatomic) CGFloat minimumLevel; // ivar: _minimumLevel
@property (readonly, nonatomic) CGFloat normalizedCurrentLevel;
@property (readonly, nonatomic) CGFloat normalizedDefaultLevel;
@property (retain, nonatomic) NSString *settingKey; // ivar: _settingKey


-(id)copy;
-(id)description;


@end


#endif