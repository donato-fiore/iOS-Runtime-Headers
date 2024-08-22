// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTAGRECORDSOURCE_H
#define FCTAGRECORDSOURCE_H

@class NSArray;


#import "FCRecordSource.h"

@interface FCTagRecordSource : FCRecordSource {
    NSArray *_nonLocalizableKeys;
}


@property (nonatomic) NSUInteger desiredFieldOptions; // ivar: _desiredFieldOptions


+(id)defaultCachePolicy;
-(NSUInteger)highThresholdDataSizeLimit;
-(NSUInteger)lowThresholdDataSizeLimit;
-(NSUInteger)storeVersion;
-(id)alwaysLocalizedKeys;
-(id)experimentalizableKeys;
-(id)initWithContentDatabase:(id)arg0 contentDirectory:(id)arg1 appActivityMonitor:(id)arg2 backgroundTaskable:(id)arg3 desiredTagRecordFieldOptions:(NSUInteger)arg4 ;
-(id)initWithContentDatabase:(id)arg0 contentDirectory:(id)arg1 appActivityMonitor:(id)arg2 backgroundTaskable:(id)arg3 experimentalizableFieldsPostfix:(id)arg4 activeTreatmentID:(id)arg5 ;
-(id)localizableExperimentalizableKeys;
-(id)localizableKeys;
-(id)localizableLanguageSpecificKeys;
-(id)nonLocalizableKeys;
-(id)recordFromCKRecord:(id)arg0 base:(id)arg1 ;
-(id)recordIDPrefixes;
-(id)recordType;
-(id)saveTagRecords:(id)arg0 ;
-(id)storeFilename;
-(int)pbRecordType;


@end


#endif