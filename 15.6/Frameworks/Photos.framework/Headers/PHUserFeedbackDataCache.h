// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHUSERFEEDBACKDATACACHE_H
#define PHUSERFEEDBACKDATACACHE_H

@class NSSet, NSArray, NSDictionary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHUserFeedbackDataCache : NSObject {
    NSObject<OS_os_log> *_userFeedbackLogging;
    PHPhotoLibrary *_photoLibrary;
}


@property (retain, nonatomic) NSSet *areaNamesWithNegativeFeedback; // ivar: _areaNamesWithNegativeFeedback
@property (retain, nonatomic) NSSet *dateIntervalsWithNegativeFeedback; // ivar: _dateIntervalsWithNegativeFeedback
@property (retain, nonatomic) NSSet *datesWithNegativeFeedback; // ivar: _datesWithNegativeFeedback
@property (retain, nonatomic) NSSet *deniedFeaturedPhotoUUIDs; // ivar: _deniedFeaturedPhotoUUIDs
@property (retain, nonatomic) NSSet *holidayNamesWithNegativeFeedback; // ivar: _holidayNamesWithNegativeFeedback
@property (retain, nonatomic) NSArray *importantPersons; // ivar: _importantPersons
@property (retain, nonatomic) NSSet *locationsWithNegativeFeedback; // ivar: _locationsWithNegativeFeedback
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSDictionary *userFeedbackTypeByPersonUUID; // ivar: _userFeedbackTypeByPersonUUID


+(BOOL)_isUserFeedbackFeatureFlagEnabled;
+(id)_emptyUserFeedbackDataCache;
-(id)_mergeCandidateUUIDsForPerson:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 importantPersons:(id)arg1 ;
-(void)_loadDeniedFeaturedPhotoUUIDsWithPhotoLibrary:(id)arg0 ;
-(void)_loadMemoryFeedbackDataWithPhotoLibrary:(id)arg0 ;
-(void)_loadPersonFeedbackDataWithPhotoLibrary:(id)arg0 ;
-(void)loadDataWithPhotoLibrary:(id)arg0 ;


@end


#endif