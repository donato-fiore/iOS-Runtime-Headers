// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCREPORTINGPLAYBACKENVIRONMENTPROPERTIESLOADER_H
#define MPCREPORTINGPLAYBACKENVIRONMENTPROPERTIESLOADER_H

@class NSString;
@protocol MPCReportingIdentityPropertiesLoading;

#import <Foundation/Foundation.h>

#import "MPCPlaybackRequestEnvironment.h"

@interface MPCReportingPlaybackEnvironmentPropertiesLoader : NSObject <MPCReportingIdentityPropertiesLoading>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // ivar: _playbackRequestEnvironment
@property (readonly) Class superclass;


-(id)initWithPlaybackRequestEnvironment:(id)arg0 ;
-(void)_getHasSubscriptionPlaybackCapabilityForUserIdentity:(id)arg0 completion:(id)arg1 ;
-(void)loadReportingIdentityPropertiesWithCompletionHandler:(id)arg0 ;


@end


#endif