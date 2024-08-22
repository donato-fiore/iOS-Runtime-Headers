// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCSPORTSEVENTRECORDSOURCE_H
#define FCSPORTSEVENTRECORDSOURCE_H



#import "FCRecordSource.h"

@interface FCSportsEventRecordSource : FCRecordSource



+(BOOL)recognizesRecordID:(id)arg0 ;
+(id)defaultCachePolicy;
+(id)recordIDPrefixes;
-(NSUInteger)highThresholdDataSizeLimit;
-(NSUInteger)lowThresholdDataSizeLimit;
-(NSUInteger)storeVersion;
-(id)alwaysLocalizedKeys;
-(id)localizableKeys;
-(id)nonLocalizableKeys;
-(id)recordFromCKRecord:(id)arg0 base:(id)arg1 ;
-(id)recordIDPrefixes;
-(id)recordType;
-(id)storeFilename;
-(int)pbRecordType;


@end


#endif