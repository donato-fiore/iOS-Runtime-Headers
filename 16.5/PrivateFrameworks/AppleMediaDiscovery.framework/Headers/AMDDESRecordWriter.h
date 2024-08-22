// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDDESRECORDWRITER_H
#define AMDDESRECORDWRITER_H


#import <Foundation/Foundation.h>


@interface AMDDESRecordWriter : NSObject



+(BOOL)evaluatePredicate:(id)arg0 withDomain:(id)arg1 ;
+(id)writeDESRecordWithBundleIdentifier:(id)arg0 withRecord:(id)arg1 error:(*id)arg2 ;
+(id)writeDESRecords:(id)arg0 ;
+(id)writeDESRecords:(id)arg0 forPluginName:(id)arg1 withBundleIdentifier:(id)arg2 domain:(id)arg3 error:(*id)arg4 ;
+(id)writeDESRecordsForPlugin:(id)arg0 withPayload:(id)arg1 andDomain:(id)arg2 ;


@end


#endif