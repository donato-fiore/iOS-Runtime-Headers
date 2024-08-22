// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(id)initWithContentDatabase:(id)arg0 contentDirectory:(id)arg1 desiredTagRecordFieldOptions:(NSUInteger)arg2 ;
-(id)initWithContentDatabase:(id)arg0 contentDirectory:(id)arg1 experimentalizableFieldsPostfix:(id)arg2 activeTreatmentID:(id)arg3 ;
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