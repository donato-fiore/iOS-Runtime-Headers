// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDPHOTOLIBRARYIMPORTINGPHOTOLIBRARYRENAMEDPERSONSLOGEVENT_H
#define HMDPHOTOLIBRARYIMPORTINGPHOTOLIBRARYRENAMEDPERSONSLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;



@interface HMDPhotoLibraryImportingPhotoLibraryRenamedPersonsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) NSInteger numberOfRenamedPersons; // ivar: _numberOfRenamedPersons


-(id)eventName;
-(id)initWithNumberOfRenamedPersons:(NSInteger)arg0 ;
-(id)serializedEvent;


@end


#endif