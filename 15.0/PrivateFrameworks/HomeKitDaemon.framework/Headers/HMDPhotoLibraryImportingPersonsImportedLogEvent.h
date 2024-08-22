// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDPHOTOLIBRARYIMPORTINGPERSONSIMPORTEDLOGEVENT_H
#define HMDPHOTOLIBRARYIMPORTINGPERSONSIMPORTEDLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDPhotoLibraryImportingPersonsImportedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) NSInteger numberOfNamedImportedPersons; // ivar: _numberOfNamedImportedPersons
@property (readonly) NSInteger totalNumberOfImportedPersons; // ivar: _totalNumberOfImportedPersons


-(id)eventName;
-(id)initWithTotalNumberOfImportedPersons:(NSInteger)arg0 numberOfNamedImportedPersons:(NSInteger)arg1 ;
-(id)serializedEvent;


@end


#endif