// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMETRICSTTRDATAPREFERENCESSTORE_H
#define HMDMETRICSTTRDATAPREFERENCESSTORE_H

@class NSString, NSDate;
@protocol HMDMetricsTTRDataStoring;

#import <Foundation/Foundation.h>


@interface HMDMetricsTTRDataPreferencesStore : NSObject <HMDMetricsTTRDataStoring>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastRadarDialogTime; // ivar: _lastRadarDialogTime
@property (readonly) Class superclass;




@end


#endif