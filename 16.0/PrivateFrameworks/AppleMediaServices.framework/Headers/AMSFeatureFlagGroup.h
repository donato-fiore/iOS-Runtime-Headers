// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSFEATUREFLAGGROUP_H
#define AMSFEATUREFLAGGROUP_H

@class NSArray, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface AMSFeatureFlagGroup : NSObject

@property (readonly, nonatomic) NSArray *flags;
@property (retain, nonatomic) NSMutableArray *mutableFlags; // ivar: _mutableFlags
@property (copy, nonatomic) NSString *name; // ivar: _name


+(id)_normalizedFlagGroupsFromFlagGroups:(id)arg0 ;
+(id)allFlagGroups;
+(id)allFlagGroupsIncludingHidden:(BOOL)arg0 ;
+(id)allFlagGroupsIncludingHidden:(BOOL)arg0 searchDirectory:(id)arg1 ;
+(id)fetchFlagGroupWithName:(id)arg0 ;
+(id)flagGroupWithName:(id)arg0 includingHidden:(BOOL)arg1 ;
+(id)groupsFromDomainData:(id)arg0 domain:(id)arg1 ;
+(id)groupsFromDomainData:(id)arg0 domain:(id)arg1 mutableFeatures:(id)arg2 profileFeatures:(id)arg3 includesHidden:(BOOL)arg4 ;
+(void)disableFlagGroupWithName:(id)arg0 error:(*id)arg1 ;
+(void)enableFlagGroupWithName:(id)arg0 error:(*id)arg1 ;
+(void)resetAllFlagGroups;
+(void)setFlagGroupWithName:(id)arg0 enabled:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)isDevelopmentPhaseEnabled:(NSInteger)arg0 ;
-(BOOL)isGroupTypeEnabled:(NSInteger)arg0 ;
-(id)_completedFlags;
-(id)_developmentFlags;
-(id)_groupKeyForDevelopmentPhase:(NSInteger)arg0 ;
-(id)_groupKeyForType:(NSInteger)arg0 ;
-(id)_testableFlags;
-(id)activateFlagsIfNeededForDevelopmentPhase:(NSInteger)arg0 ;
-(id)activateFlagsIfNeededForType:(NSInteger)arg0 ;
-(id)allITFEs;
-(id)completedFlags;
-(id)developmentFlags;
-(id)fetchAllGroupKeys;
-(id)flagsForDevelopmentPhase:(NSInteger)arg0 ;
-(id)flagsForType:(NSInteger)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 domain:(id)arg1 ;
-(id)testableFlags;
-(void)activateITFEs;
-(void)appendFlag:(id)arg0 ;
-(void)reset;
-(void)setGroupType:(NSInteger)arg0 enabled:(BOOL)arg1 ;


@end


#endif