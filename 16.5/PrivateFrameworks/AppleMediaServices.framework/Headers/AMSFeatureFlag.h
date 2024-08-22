// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSFEATUREFLAG_H
#define AMSFEATUREFLAG_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface AMSFeatureFlag : NSObject

@property (copy, nonatomic) NSString *ITFE;
@property (copy, nonatomic) NSString *associatedGroup; // ivar: _associatedGroup
@property (nonatomic, getter=isCodeComplete) BOOL codeComplete;
@property (nonatomic, getter=isDefaultEnabled) BOOL defaultEnabled; // ivar: _defaultEnabled
@property (nonatomic) NSInteger developmentPhase; // ivar: _developmentPhase
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSString *feature; // ivar: _feature
@property (copy, nonatomic) NSString *featureDescription; // ivar: _featureDescription
@property (retain, nonatomic) NSDictionary *flagData; // ivar: _flagData
@property (copy, nonatomic) NSString *flagGroup; // ivar: _flagGroup
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) NSArray *itfes; // ivar: _itfes
@property (readonly, nonatomic, getter=isRemote) BOOL remote;
@property (nonatomic, getter=isTestable) BOOL testable;
@property (nonatomic, getter=isUserEnabled) BOOL userEnabled; // ivar: _userEnabled


+(BOOL)disableFlagForFeature:(id)arg0 domain:(id)arg1 error:(*id)arg2 ;
+(BOOL)disableFlagGroup:(id)arg0 error:(*id)arg1 ;
+(BOOL)enableFlagForFeature:(id)arg0 domain:(id)arg1 error:(*id)arg2 ;
+(BOOL)enableFlagGroup:(id)arg0 error:(*id)arg1 ;
+(id)allFlagGroups;
+(id)flagForFeature:(id)arg0 domain:(id)arg1 ;
+(id)flagForFeature:(id)arg0 domain:(id)arg1 searchDirectory:(id)arg2 ;
+(id)flagGroupWithName:(id)arg0 ;
-(BOOL)hasITFEWithName:(id)arg0 ;
-(NSInteger)_developmentPhaseFromGroupType:(NSInteger)arg0 ;
-(NSInteger)groupType;
-(id)initWithFlagData:(id)arg0 mutableFeatures:(id)arg1 profileFeatures:(id)arg2 feature:(id)arg3 domain:(id)arg4 ;
-(id)itfesFromString:(id)arg0 mutableFeatures:(id)arg1 profileFeatures:(id)arg2 ;
-(void)_activateFlag;
-(void)_updateDevelopmentPhase;
-(void)_updateInternalEnabledState;
-(void)_updateUserEnabled:(BOOL)arg0 ;


@end


#endif