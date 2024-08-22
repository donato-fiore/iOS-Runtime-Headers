// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPHOTOLIBRARYIMPORTINGPHOTOLIBRARYRENAMEDPERSONSLOGEVENT_H
#define HMDPHOTOLIBRARYIMPORTINGPHOTOLIBRARYRENAMEDPERSONSLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDPhotoLibraryImportingPhotoLibraryRenamedPersonsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) NSInteger numberOfRenamedPersons; // ivar: _numberOfRenamedPersons
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)initWithNumberOfRenamedPersons:(NSInteger)arg0 ;


@end


#endif