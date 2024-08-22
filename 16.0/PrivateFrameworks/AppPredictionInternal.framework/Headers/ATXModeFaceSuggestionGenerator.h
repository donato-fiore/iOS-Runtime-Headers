// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODEFACESUGGESTIONGENERATOR_H
#define ATXMODEFACESUGGESTIONGENERATOR_H

@class NSDictionary, NSSet;
@protocol ATXSuggestedSpacesEnvironment;

#import <Foundation/Foundation.h>

#import "ATXSuggestedPagesTunableConstants.h"

@interface ATXModeFaceSuggestionGenerator : NSObject <ATXSuggestedSpacesEnvironment>



@property (readonly, nonatomic) NSDictionary *appLaunchCounts; // ivar: _appLaunchCounts
@property (readonly, nonatomic) NSSet *suggestedApps; // ivar: _suggestedApps
@property (readonly, nonatomic) ATXSuggestedPagesTunableConstants *tunableConstants;


-(id)_facesForModeType:(NSInteger)arg0 modeUUID:(id)arg1 allDescriptors:(id)arg2 ;
-(id)_firstDescriptorWithExtension:(id)arg0 focus:(NSInteger)arg1 allDescriptors:(id)arg2 ;
-(id)_firstDescriptorWithExtension:(id)arg0 identifier:(id)arg1 allDescriptors:(id)arg2 ;
-(id)_firstPhotosDescriptorMatchingSubtype:(NSInteger)arg0 allDescriptors:(id)arg1 ;
-(id)_posterCandidatesForModeType:(NSInteger)arg0 allDescriptors:(id)arg1 ;
-(id)facesForMode:(id)arg0 allDescriptors:(id)arg1 ;
-(id)generateFacesFromDescriptors:(id)arg0 ;
-(id)init;
-(void)generateAndCacheFacesFromDescriptors:(id)arg0 ;


@end


#endif