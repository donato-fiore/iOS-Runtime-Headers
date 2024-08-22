// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPEOPLETITLEUTILITY_H
#define PGPEOPLETITLEUTILITY_H


#import <Foundation/Foundation.h>


@interface PGPeopleTitleUtility : NSObject



+(id)_ageStringWithStartAge:(NSInteger)arg0 endAge:(NSInteger)arg1 ;
+(id)_placeDisplayNameForPeopleAddressNodeLabel:(id)arg0 titleComponent:(id)arg1 containsMe:(BOOL)arg2 ;
+(id)ageStringForPersonNode:(id)arg0 date:(id)arg1 ;
+(id)ageStringForPersonNode:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
+(id)beautifiedLocationStringWithPersonNode:(id)arg0 peopleAddressEdge:(id)arg1 titleComponent:(id)arg2 insertLineBreak:(BOOL)arg3 allowFamilyHome:(BOOL)arg4 ;
+(id)nameFromPersonNode:(id)arg0 ;
+(id)nameStringForPersonNodes:(id)arg0 includeMe:(BOOL)arg1 allowUnnamed:(BOOL)arg2 allowedGroupsFormat:(NSUInteger)arg3 insertLineBreaks:(BOOL)arg4 ;
+(id)nameStringForPersonNodes:(id)arg0 includeMe:(BOOL)arg1 insertLineBreaks:(BOOL)arg2 ;
+(id)peopleGroupNameForPersonNodes:(id)arg0 allowedGroupsFormat:(NSUInteger)arg1 ;
+(id)peopleGroupNameForPersonNodes:(id)arg0 allowedGroupsFormat:(NSUInteger)arg1 fallbackToGeneric:(BOOL)arg2 ;


@end


#endif