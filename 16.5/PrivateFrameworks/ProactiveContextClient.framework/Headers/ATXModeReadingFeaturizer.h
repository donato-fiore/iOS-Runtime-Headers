// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEREADINGFEATURIZER_H
#define ATXMODEREADINGFEATURIZER_H



#import "ATXModeAppLaunchFeaturizer.h"

@interface ATXModeReadingFeaturizer : ATXModeAppLaunchFeaturizer



-(NSUInteger)expectedGenreId;
-(id)additionalAllowedBundleIds;
-(id)registrationId;
-(int)modeFeatureType;


@end


#endif