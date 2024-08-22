// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSFEATUREFLAGGROUP_H
#define AMSFEATUREFLAGGROUP_H

@class NSString, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface AMSFeatureFlagGroup : NSObject

@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSArray *flags;
@property (retain, nonatomic) NSMutableArray *mutableFlags; // ivar: _mutableFlags
@property (copy, nonatomic) NSString *name; // ivar: _name


+(id)allFlagGroups;
+(id)allFlagGroupsIncludingHidden:(BOOL)arg0 ;
+(id)fetchFlagGroupWithName:(id)arg0 ;
+(id)flagGroupWithName:(id)arg0 includingHidden:(BOOL)arg1 ;
+(void)disableFlagGroupWithName:(id)arg0 error:(*id)arg1 ;
+(void)enableFlagGroupWithName:(id)arg0 error:(*id)arg1 ;
+(void)resetAllFlagGroups;
+(void)setFlagGroupWithName:(id)arg0 enabled:(BOOL)arg1 error:(*id)arg2 ;
-(id)completedFlags;
-(id)developmentFlags;
-(id)initWithName:(id)arg0 domain:(id)arg1 ;
-(id)testableFlags;
-(void)activateITFEs;
-(void)appendFlag:(id)arg0 ;
-(void)reset;


@end


#endif