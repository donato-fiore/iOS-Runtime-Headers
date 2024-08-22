// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMPROVIDERHISTORYLOG_H
#define KMPROVIDERHISTORYLOG_H

@class KVDictionaryLog, NSString;

#import <Foundation/Foundation.h>


@interface KMProviderHistoryLog : NSObject {
    KVDictionaryLog *_log;
    NSString *_originAppId;
    BOOL _donationStartTimeRecorded;
}




-(BOOL)recordChangesAcceptedWithVersion:(NSUInteger)arg0 historyToken:(id)arg1 ;
-(BOOL)recordDonationStartTime;
-(NSUInteger)getVersion;
-(id)_recordDonationEndTime;
-(id)_recordHistoryToken:(id)arg0 ;
-(id)_recordVersion:(NSUInteger)arg0 ;
-(id)getDonationEndTime;
-(id)getDonationStartTime;
-(id)getHistoryToken;
-(id)initWithOriginAppId:(id)arg0 ;
-(id)initWithOriginAppId:(id)arg0 rootDirectory:(id)arg1 ;


@end


#endif