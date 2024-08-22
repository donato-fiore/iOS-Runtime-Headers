// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCARTICLERECORDSOURCE_H
#define FCARTICLERECORDSOURCE_H

@class NSArray, NSString, NFUnfairLock;


#import "FCRecordSource.h"

@interface FCArticleRecordSource : FCRecordSource

@property (retain, nonatomic) NSArray *articleTagMetadataRecordKeys; // ivar: _articleTagMetadataRecordKeys
@property (retain, nonatomic) NSString *conversionCohortsExpField; // ivar: _conversionCohortsExpField
@property (retain, nonatomic) NSArray *conversionRecordKeys; // ivar: _conversionRecordKeys
@property (nonatomic) NSUInteger desiredArticleRecordFieldOptions; // ivar: _desiredArticleRecordFieldOptions
@property (retain, nonatomic) NSString *engagementCohortsExpField; // ivar: _engagementCohortsExpField
@property (retain, nonatomic) NSArray *engagementRecordKeys; // ivar: _engagementRecordKeys
@property (retain, nonatomic) NFUnfairLock *experimentalFieldsLock; // ivar: _experimentalFieldsLock
@property (retain, nonatomic) NSArray *topicFlagsRecordKeys; // ivar: _topicFlagsRecordKeys


+(BOOL)supportsDeletions;
+(BOOL)useTaggedImages;
+(id)canaryRecordName;
+(id)changeTagFromCKRecord:(id)arg0 ;
+(id)identifierFromCKRecord:(id)arg0 ;
+(id)modificationDateFromCKRecord:(id)arg0 ;
-(NSUInteger)highThresholdDataSizeLimit;
-(NSUInteger)lowThresholdDataSizeLimit;
-(NSUInteger)storeVersion;
-(id)alwaysLocalizedKeys;
-(id)articleTagMetadataFromCKRecord:(id)arg0 ;
-(id)articleTopicsFromCKRecord:(id)arg0 engagement:(id)arg1 conversionStats:(id)arg2 tagMetadata:(id)arg3 ;
-(id)conversionStatsFromCKRecord:(id)arg0 ;
-(id)engagementFromCKRecord:(id)arg0 ;
-(id)experimentalizableKeys;
-(id)initWithContentDatabase:(id)arg0 contentDirectory:(id)arg1 desiredArticleRecordFieldOptions:(NSUInteger)arg2 experimentalizableFieldsPostfix:(id)arg3 engagementCohortsExpField:(id)arg4 conversionCohortsExpField:(id)arg5 activeTreatmentID:(id)arg6 ;
-(id)initWithContentDatabase:(id)arg0 contentDirectory:(id)arg1 experimentalizableFieldsPostfix:(id)arg2 activeTreatmentID:(id)arg3 ;
-(id)localizableExperimentalizableKeys;
-(id)localizableKeys;
-(id)nonLocalizableKeys;
-(id)recordFromCKRecord:(id)arg0 base:(id)arg1 ;
-(id)recordIDPrefixes;
-(id)recordType;
-(id)saveArticleRecords:(id)arg0 ;
-(id)saveFeedItemAndArticleRecords:(id)arg0 ;
-(id)storeFilename;
-(id)topicFlagsFromCKRecord:(id)arg0 ;
-(id)urlStringForThumbnailKey:(id)arg0 inRecord:(id)arg1 ;
-(int)pbRecordType;
-(void)updateEngagementCohortsExpField:(id)arg0 conversionCohortsExpField:(id)arg1 ;


@end


#endif