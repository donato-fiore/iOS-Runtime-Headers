// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKRECORDUTILITIES_H
#define CKRECORDUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKRecordUtilities : NSObject



+(id)recordIDUsingName:(id)arg0 zoneID:(id)arg1 ;
+(id)recordIDUsingSalt:(id)arg0 zoneID:(id)arg1 guid:(id)arg2 ;
+(id)recordNameForRecordChangeTag:(id)arg0 ckRecordID:(id)arg1 salt:(id)arg2 guid:(id)arg3 ;
+(id)recordNameUsingSalt:(id)arg0 guid:(id)arg1 ;


@end


#endif