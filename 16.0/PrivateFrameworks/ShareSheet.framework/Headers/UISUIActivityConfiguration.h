// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISUIACTIVITYCONFIGURATION_H
#define UISUIACTIVITYCONFIGURATION_H

@class UIImage, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UISUIActivityConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) UIImage *actionImage; // ivar: _actionImage
@property (readonly, nonatomic) NSInteger activityCategory; // ivar: _activityCategory
@property (retain, nonatomic) NSString *activityClassName; // ivar: _activityClassName
@property (readonly, nonatomic) UIImage *activityImage; // ivar: _activityImage
@property (readonly, nonatomic) BOOL activitySupportsPromiseURLs; // ivar: _activitySupportsPromiseURLs
@property (readonly, nonatomic) NSString *activityTitle;
@property (readonly, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, nonatomic) NSUUID *activityUUID; // ivar: _activityUUID
@property (readonly, nonatomic) BOOL appIsDocumentTypeOwner; // ivar: _appIsDocumentTypeOwner
@property (readonly, nonatomic) NSString *defaultActivityTitle; // ivar: _defaultActivityTitle
@property (readonly, nonatomic) NSInteger defaultSortGroup; // ivar: _defaultSortGroup
@property (nonatomic) NSInteger encodingType; // ivar: _encodingType
@property (readonly, nonatomic) NSString *fallbackActivityType; // ivar: _fallbackActivityType
@property (readonly, nonatomic) NSUInteger indexInApplicationDefinedActivities; // ivar: _indexInApplicationDefinedActivities
@property (nonatomic) BOOL isCapabilityBasedActivity; // ivar: _isCapabilityBasedActivity
@property (retain, nonatomic) NSString *overrideTitle; // ivar: _overrideTitle
@property (readonly, nonatomic) NSString *positionBeforeActivityType; // ivar: _positionBeforeActivityType
@property (readonly, nonatomic) CGSize preferredThumbnailSize; // ivar: _preferredThumbnailSize
@property (readonly, nonatomic) NSString *systemImageName; // ivar: _systemImageName


+(BOOL)supportsSecureCoding;
+(id)configurationForActivity:(id)arg0 ;
-(id)_init;
-(id)initWithActivity:(id)arg0 encodingType:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_collectPropertiesFromAttributesOfUnderlyingActivity:(id)arg0 ;
-(void)_decodeBasicPropertiesWithCoder:(id)arg0 ;
-(void)_decodeForEncodingByClassNameWithCoder:(id)arg0 ;
-(void)_decodeForEncodingByPropertiesWithCoder:(id)arg0 ;
-(void)_encodeBasicPropertiesWithCoder:(id)arg0 ;
-(void)_encodeByClassNameWithCoder:(id)arg0 ;
-(void)_encodeByPropertiesWithCoder:(id)arg0 ;
-(void)_validateProperties;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateConfigurationWithOverrideTitle:(id)arg0 ;


@end


#endif