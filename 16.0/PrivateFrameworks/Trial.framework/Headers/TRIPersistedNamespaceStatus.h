// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPERSISTEDNAMESPACESTATUS_H
#define TRIPERSISTEDNAMESPACESTATUS_H

@class TRIPBMessage, TRIPBTimestamp, NSString;



@interface TRIPersistedNamespaceStatus : TRIPBMessage

@property (nonatomic) BOOL hasLastFetchWasSuccess;
@property (nonatomic) BOOL hasLatestNotificationQueryLocalTime;
@property (nonatomic) BOOL hasNamespaceCompatibilityVersion;
@property (nonatomic) BOOL hasNamespaceName;
@property (nonatomic) BOOL lastFetchWasSuccess;
@property (retain, nonatomic) TRIPBTimestamp *latestNotificationQueryLocalTime;
@property (nonatomic) unsigned int namespaceCompatibilityVersion;
@property (copy, nonatomic) NSString *namespaceName;


+(id)descriptor;


@end


#endif