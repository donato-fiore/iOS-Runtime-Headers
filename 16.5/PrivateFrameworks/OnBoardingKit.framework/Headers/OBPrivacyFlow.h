// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBPRIVACYFLOW_H
#define OBPRIVACYFLOW_H

@class NSString, NSDictionary, NSAttributedString, NSArray;


#import "OBFlow.h"
#import "OBImage.h"
#import "OBBundle.h"

@interface OBPrivacyFlow : OBFlow {
    NSString *_splashContentName;
    NSDictionary *_splashPlist;
    BOOL _buttonIconLoaded;
    OBImage *_buttonIcon;
    BOOL _splashPListContainsLegacyStringKeys;
}


@property (retain, nonatomic) OBBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) OBImage *buttonIcon;
@property (readonly, nonatomic) NSUInteger contentVersion;
@property (readonly, nonatomic) BOOL enablesGroupingInCombinedList;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedButtonCaption;
@property (readonly, nonatomic) NSString *localizedButtonTitle;
@property (readonly, nonatomic) NSAttributedString *localizedCombinedFooter;
@property (readonly, nonatomic) NSString *localizedCombinedHeader;
@property (readonly, nonatomic) NSArray *localizedContentList;
@property (readonly, nonatomic) NSString *localizedShortTitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic, getter=isPersonallyIdentifiable) BOOL personallyIdentifiable;
@property (readonly, nonatomic) BOOL platformSupported;
@property (readonly, nonatomic) BOOL showInCombinedList;


+(id)_modelSpecificLocalizedStringKeyForKey:(id)arg0 preferredDeviceType:(NSUInteger)arg1 ;
+(id)_splashPlistFromBundle:(id)arg0 forContentName:(id)arg1 ;
+(id)flowWithBundle:(id)arg0 ;
-(BOOL)_conformsToRequirement:(id)arg0 ;
-(BOOL)_conformsToRequirements:(id)arg0 ;
-(id)_SKU;
-(id)_bestStringForKeyWithPrefix:(id)arg0 language:(id)arg1 preferredDeviceType:(NSUInteger)arg2 ;
-(id)_bundleImageNamed:(id)arg0 ;
-(id)_currentPlatform;
-(id)_deviceClass;
-(id)_iconType;
-(id)_legacyLocalizedContentListForLanguage:(id)arg0 preferredDeviceType:(NSUInteger)arg1 ;
-(id)_splashLocalizedStringForKey:(id)arg0 language:(id)arg1 preferredDeviceType:(NSUInteger)arg2 ;
-(id)_splashLocalizedStringForKey:(id)arg0 language:(id)arg1 table:(id)arg2 preferredDeviceType:(NSUInteger)arg3 ;
-(id)_splashPlist;
-(id)_stringForPlaceholderBundleWithString:(id)arg0 ;
-(id)_textForConditionalItem:(id)arg0 language:(id)arg1 preferredDeviceType:(NSUInteger)arg2 ;
-(id)initWithBundle:(id)arg0 ;
-(id)initWithSplashContent:(id)arg0 ;
-(id)localizedButtonCaptionForLanguage:(id)arg0 preferredDeviceType:(NSUInteger)arg1 ;
-(id)localizedButtonTitleForLanguage:(id)arg0 preferredDeviceType:(NSUInteger)arg1 ;
-(id)localizedCombinedFooterForLanguage:(id)arg0 preferredDeviceType:(NSUInteger)arg1 ;
-(id)localizedCombinedHeaderForLanguage:(id)arg0 preferredDeviceType:(NSUInteger)arg1 ;
-(id)localizedContentListForLanguage:(id)arg0 preferredDeviceType:(NSUInteger)arg1 ;
-(id)localizedShortTitleForLanguage:(id)arg0 preferredDeviceType:(NSUInteger)arg1 ;
-(id)localizedTitleForLanguage:(id)arg0 preferredDeviceType:(NSUInteger)arg1 ;


@end


#endif