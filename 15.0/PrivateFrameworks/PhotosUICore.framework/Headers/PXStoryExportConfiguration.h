// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYEXPORTCONFIGURATION_H
#define PXSTORYEXPORTCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PXExtendedTraitCollection.h"
#import "PXStoryConfiguration.h"
#import "PXStoryExportVideoOptions.h"

@interface PXStoryExportConfiguration : NSObject

@property (readonly, nonatomic) NSString *activityCategory; // ivar: _activityCategory
@property (readonly, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) PXStoryConfiguration *storyConfiguration; // ivar: _storyConfiguration
@property (readonly, nonatomic) PXStoryExportVideoOptions *videoOptions; // ivar: _videoOptions


-(id)initWithConfiguration:(id)arg0 activityType:(id)arg1 activityCategory:(NSInteger)arg2 videoOptions:(id)arg3 ;
-(id)initWithConfiguration:(id)arg0 activityType:(id)arg1 videoOptions:(id)arg2 ;
-(id)initWithConfiguration:(id)arg0 videoOptions:(id)arg1 ;


@end


#endif