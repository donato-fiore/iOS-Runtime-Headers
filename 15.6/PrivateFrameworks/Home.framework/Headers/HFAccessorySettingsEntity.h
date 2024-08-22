// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYSETTINGSENTITY_H
#define HFACCESSORYSETTINGSENTITY_H

@class NSString, NSArray, NSFormatter, NSDictionary;

#import <Foundation/Foundation.h>


@interface HFAccessorySettingsEntity : NSObject

@property (readonly, copy, nonatomic) NSString *adapterIdentifier; // ivar: _adapterIdentifier
@property (readonly, nonatomic) BOOL alwaysShowGroup; // ivar: _alwaysShowGroup
@property (readonly, copy, nonatomic) NSArray *booleanKeyPathDependencies; // ivar: _booleanKeyPathDependencies
@property (readonly, copy, nonatomic) NSFormatter *footerTitleFormatter; // ivar: _footerTitleFormatter
@property (readonly, copy, nonatomic) NSFormatter *headerTitleFormatter; // ivar: _headerTitleFormatter
@property (readonly, nonatomic) NSInteger interfaceModality; // ivar: _interfaceModality
@property (readonly, nonatomic) BOOL isSoftwareVersionNeeded; // ivar: _isSoftwareVersionNeeded
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy, nonatomic) NSString *localizedFooter; // ivar: _localizedFooter
@property (readonly, copy, nonatomic) NSString *localizedHeader; // ivar: _localizedHeader
@property (readonly, copy, nonatomic) NSString *overrideLocalizedTitleKey; // ivar: _overrideLocalizedTitleKey
@property (readonly, nonatomic) BOOL previewAccessory; // ivar: _previewAccessory
@property (readonly, copy, nonatomic) NSFormatter *previewValueFormatter; // ivar: _previewValueFormatter
@property (readonly, copy, nonatomic) NSString *previewValueKeyPath; // ivar: _previewValueKeyPath
@property (readonly, nonatomic) BOOL requiresDependenciesToShowSetting; // ivar: _requiresDependenciesToShowSetting
@property (readonly, nonatomic) BOOL showInSeperateSection; // ivar: _showInSeperateSection
@property (readonly, copy, nonatomic) NSString *sortKey; // ivar: _sortKey
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) BOOL wantsSeparateSectionPerGroup; // ivar: _wantsSeparateSectionPerGroup


+(id)settingsAtURL:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif