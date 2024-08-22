// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHOTOSANALYTICSSYSTEMPROPERTYPROVIDER_H
#define PHOTOSANALYTICSSYSTEMPROPERTYPROVIDER_H

@class NSString;
@protocol CPAnalyticsDynamicPropertyProvider;

#import <Foundation/Foundation.h>


@interface PhotosAnalyticsSystemPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_deviceFreeSpaceDescription;
-(id)deviceModel;
-(id)getDynamicProperty:(id)arg0 forEventName:(id)arg1 payloadForSystemPropertyExtraction:(id)arg2 ;
-(id)lowPowerModeEnabled;
-(id)osVersion;
-(id)percentageOfFreeSpaceOnDevice;
-(id)process;
-(void)registerSystemProperties:(id)arg0 ;


@end


#endif