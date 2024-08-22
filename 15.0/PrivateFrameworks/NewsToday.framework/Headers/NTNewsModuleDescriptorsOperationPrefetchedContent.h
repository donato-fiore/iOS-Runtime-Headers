// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTNEWSMODULEDESCRIPTORSOPERATIONPREFETCHEDCONTENT_H
#define NTNEWSMODULEDESCRIPTORSOPERATIONPREFETCHEDCONTENT_H

@class NSDictionary;
@protocol NFCopying, FCNewsAppConfiguration, FCTodayPrivateData;

#import <Foundation/Foundation.h>


@interface NTNewsModuleDescriptorsOperationPrefetchedContent : NSObject <NFCopying>



@property (readonly, copy, nonatomic) NSObject<FCNewsAppConfiguration> *appConfiguration; // ivar: _appConfiguration
@property (readonly, copy, nonatomic) NSDictionary *prefetchedHeldRecordsByType; // ivar: _prefetchedHeldRecordsByType
@property (readonly, copy, nonatomic) NSObject<FCTodayPrivateData> *privateData; // ivar: _privateData
@property (readonly, copy, nonatomic) NSDictionary *todayConfigsByRequestID; // ivar: _todayConfigsByRequestID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAppConfiguration:(id)arg0 privateData:(id)arg1 todayConfigsByRequestID:(id)arg2 prefetchedHeldRecordsByType:(id)arg3 ;


@end


#endif