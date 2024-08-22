// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPHOTOLIBRARYIMPORTINGPHOTOLIBRARYRENAMEDPERSONSLOGEVENT_H
#define HMDPHOTOLIBRARYIMPORTINGPHOTOLIBRARYRENAMEDPERSONSLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDPhotoLibraryImportingPhotoLibraryRenamedPersonsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger numberOfRenamedPersons; // ivar: _numberOfRenamedPersons
@property (readonly) Class superclass;


-(id)initWithNumberOfRenamedPersons:(NSInteger)arg0 ;


@end


#endif