// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUISENSORACTIVITYDATA_H
#define CCUISENSORACTIVITYDATA_H

@class NSString, UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CCUISensorActivityData : NSObject <NSCopying>



@property (copy, nonatomic) NSString *attributionGroup; // ivar: _attributionGroup
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *executableDisplayName; // ivar: _executableDisplayName
@property (nonatomic) BOOL isSystemService; // ivar: _isSystemService
@property (nonatomic) BOOL launchToSettings; // ivar: _launchToSettings
@property (retain, nonatomic) UIColor *sensorIndicatorColor; // ivar: _sensorIndicatorColor
@property (nonatomic) NSUInteger sensorType; // ivar: _sensorType
@property (nonatomic) BOOL usedRecently; // ivar: _usedRecently
@property (copy, nonatomic) NSString *website; // ivar: _website


+(id)_genericLocationSystemServiceActivity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;


@end


#endif