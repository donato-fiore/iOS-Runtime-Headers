// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYEXPORTCONFIGURATION_H
#define PXSTORYEXPORTCONFIGURATION_H

@class NSString;
@protocol PXStoryMutableExportConfiguration, PXStoryErrorReporter;

#import <Foundation/Foundation.h>

#import "PXExtendedTraitCollection.h"
#import "PXStoryConfiguration.h"
#import "PXStoryExportVideoOptions.h"

@interface PXStoryExportConfiguration : NSObject <PXStoryMutableExportConfiguration>



@property (retain, nonatomic) NSString *activityCategory; // ivar: _activityCategory
@property (retain, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PXStoryErrorReporter> *errorReporter; // ivar: _errorReporter
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXStoryConfiguration *storyConfiguration; // ivar: _storyConfiguration
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXStoryExportVideoOptions *videoOptions; // ivar: _videoOptions


-(id)initWithConfiguration:(id)arg0 videoOptions:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 videoOptions:(id)arg1 builder:(id)arg2 ;
-(void)copyOptionalPropertiesFromOtherExportConfiguration:(id)arg0 ;


@end


#endif