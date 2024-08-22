// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTAGLISTRECORDSOURCE_H
#define FCTAGLISTRECORDSOURCE_H



#import "FCRecordSource.h"

@interface FCTagListRecordSource : FCRecordSource



-(NSUInteger)highThresholdDataSizeLimit;
-(NSUInteger)lowThresholdDataSizeLimit;
-(NSUInteger)storeVersion;
-(id)nonLocalizableKeys;
-(id)recordFromCKRecord:(id)arg0 base:(id)arg1 ;
-(id)recordIDPrefixes;
-(id)recordType;
-(id)storeFilename;
-(int)pbRecordType;


@end


#endif