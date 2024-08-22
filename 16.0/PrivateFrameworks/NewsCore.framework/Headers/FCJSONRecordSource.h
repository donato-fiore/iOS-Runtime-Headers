// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCJSONRECORDSOURCE_H
#define FCJSONRECORDSOURCE_H

@class NSISO8601DateFormatter;
@protocol FCJSONRecordSourceType;


#import "FCRecordSource.h"
#import "FCJSONRecordSourceSchema.h"

@interface FCJSONRecordSource : FCRecordSource <FCJSONRecordSourceType>



@property (copy, nonatomic) NSISO8601DateFormatter *dateFormatter; // ivar: _dateFormatter
@property (copy, nonatomic) FCJSONRecordSourceSchema *schema; // ivar: _schema


-(NSUInteger)highThresholdDataSizeLimit;
-(NSUInteger)lowThresholdDataSizeLimit;
-(NSUInteger)storeVersion;
-(id)alwaysLocalizedKeys;
-(id)initWithSchema:(id)arg0 contentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentationSuffix:(id)arg3 activeTreatmentID:(id)arg4 ;
-(id)keyValueRepresentationOfRecord:(id)arg0 ;
-(id)localizableKeys;
-(id)nonLocalizableKeys;
-(id)recordFromCKRecord:(id)arg0 base:(id)arg1 ;
-(id)recordIDPrefixes;
-(id)recordType;
-(id)storeFilename;
-(int)pbRecordType;
-(void)fetchRecordsWithIDs:(id)arg0 cachePolicy:(id)arg1 completion:(id)arg2 ;
-(void)fetchRecordsWithIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif