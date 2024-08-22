// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPHOTOLIBRARYIMPORTINGFACECROPSIMPORTEDLOGEVENT_H
#define HMDPHOTOLIBRARYIMPORTINGFACECROPSIMPORTEDLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDPhotoLibraryImportingFaceCropsImportedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSInteger numberOfImportedFaceCrops; // ivar: _numberOfImportedFaceCrops
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)initWithNumberOfImportedFaceCrops:(NSInteger)arg0 ;


@end


#endif