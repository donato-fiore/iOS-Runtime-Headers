// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBAPPLICATIONINFO_H
#define DBAPPLICATIONINFO_H

@class FBSApplicationInfo, NSString, CRCarPlayAppDeclaration, NSArray;



@interface DBApplicationInfo : FBSApplicationInfo {
    NSString *_carDisplayName;
}


@property (readonly, nonatomic, getter=isCarInternal) BOOL carInternal; // ivar: _carInternal
@property (readonly, nonatomic) CRCarPlayAppDeclaration *carPlayDeclaration; // ivar: _carPlayDeclaration
@property (readonly, nonatomic, getter=isCarPrototype) BOOL carPrototype; // ivar: _carPrototype
@property (readonly, nonatomic, getter=isCertificationApp) BOOL certificationApp; // ivar: _certificationApp
@property (readonly, nonatomic, getter=isFirstParty) BOOL firstParty; // ivar: _firstParty
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic, getter=isInstalled) BOOL installed; // ivar: _installed
@property (readonly, nonatomic, getter=isInternal) BOOL internal; // ivar: _internal
@property (readonly, nonatomic, getter=isLinkedOnOrAfterYukon) BOOL linkedOnOrAfterYukon; // ivar: _linkedOnOrAfterYukon
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder; // ivar: _placeholder
@property (readonly, nonatomic) BOOL presentsFullScreen; // ivar: _presentsFullScreen
@property (readonly, nonatomic) BOOL presentsUnderStatusBar; // ivar: _presentsUnderStatusBar
@property (readonly, nonatomic) BOOL requiresBackgroundURLDelivery; // ivar: _requiresBackgroundURLDelivery
@property (readonly, nonatomic) NSArray *requiresFeatureFlags; // ivar: _requiresFeatureFlags
@property (readonly, nonatomic) BOOL supportsDashboardNavigation; // ivar: _supportsDashboardNavigation
@property (readonly, nonatomic) BOOL supportsInstrumentClusterNavigation; // ivar: _supportsInstrumentClusterNavigation
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)displayName;
-(void)_loadFromProxy:(id)arg0 ;


@end


#endif