// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMENATURALLIGHTINGCURVEWRITER_H
#define HMDHOMENATURALLIGHTINGCURVEWRITER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDLightProfileDataSource;


#import "HMDHome.h"

@interface HMDHomeNaturalLightingCurveWriter : HMFObject <HMFLogging>



@property (readonly) NSObject<HMDLightProfileDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 dataSource:(id)arg1 ;
-(void)setNaturalLightingEnabled:(BOOL)arg0 forLightProfiles:(id)arg1 completion:(id)arg2 ;


@end


#endif