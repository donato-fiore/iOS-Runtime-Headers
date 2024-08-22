// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDFEATURESDATASOURCE_H
#define HMDFEATURESDATASOURCE_H

@class NSString;
@protocol HMDFeaturesDataSource;

#import <Foundation/Foundation.h>


@interface HMDFeaturesDataSource : NSObject <HMDFeaturesDataSource>



@property (readonly, getter=isCHIPFeatureEnabled) BOOL chipFeatureEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isSignificantEventNotificationsFeatureEnabled) BOOL significantEventNotificationsFeatureEnabled;
@property (readonly) Class superclass;




@end


#endif