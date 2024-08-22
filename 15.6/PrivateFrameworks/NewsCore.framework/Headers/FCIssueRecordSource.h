// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCISSUERECORDSOURCE_H
#define FCISSUERECORDSOURCE_H



#import "FCRecordSource.h"

@interface FCIssueRecordSource : FCRecordSource



+(BOOL)_useTaggedImages;
+(id)_URLStringForCoverImageKey:(id)arg0 inRecord:(id)arg1 ;
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