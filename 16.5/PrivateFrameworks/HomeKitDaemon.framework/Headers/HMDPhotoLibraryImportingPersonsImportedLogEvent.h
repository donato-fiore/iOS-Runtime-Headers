// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPHOTOLIBRARYIMPORTINGPERSONSIMPORTEDLOGEVENT_H
#define HMDPHOTOLIBRARYIMPORTINGPERSONSIMPORTEDLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDPhotoLibraryImportingPersonsImportedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger numberOfNamedImportedPersons; // ivar: _numberOfNamedImportedPersons
@property (readonly) Class superclass;
@property (readonly) NSInteger totalNumberOfImportedPersons; // ivar: _totalNumberOfImportedPersons


-(id)initWithTotalNumberOfImportedPersons:(NSInteger)arg0 numberOfNamedImportedPersons:(NSInteger)arg1 ;


@end


#endif