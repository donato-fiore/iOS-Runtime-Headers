// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCARTICLELISTRECORDSOURCE_H
#define FCARTICLELISTRECORDSOURCE_H



#import "FCRecordSource.h"

@interface FCArticleListRecordSource : FCRecordSource



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