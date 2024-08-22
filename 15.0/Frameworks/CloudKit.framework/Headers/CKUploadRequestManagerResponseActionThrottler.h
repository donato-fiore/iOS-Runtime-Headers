// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKUPLOADREQUESTMANAGERRESPONSEACTIONTHROTTLER_H
#define CKUPLOADREQUESTMANAGERRESPONSEACTIONTHROTTLER_H

@class NSSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CKUploadRequestManagerResponseActionThrottler : NSObject

@property (copy, nonatomic) NSSet *actionsToThrottle; // ivar: _actionsToThrottle
@property (nonatomic) CGFloat maximumThrottleTime; // ivar: _maximumThrottleTime
@property (nonatomic) CGFloat minimumRetryTime; // ivar: _minimumRetryTime
@property (nonatomic) NSInteger minimumThrottleCount; // ivar: _minimumThrottleCount
@property (retain, nonatomic) NSMutableDictionary *responseActionToMetadata; // ivar: _responseActionToMetadata
@property (nonatomic) CGFloat throttlePeriod; // ivar: _throttlePeriod


+(CGFloat)currentTime;
+(void)sleep:(CGFloat)arg0 ;
-(CGFloat)throttleTimeForCount:(NSInteger)arg0 isRetry:(BOOL)arg1 ;
-(id)init;
-(void)gateResponseAction:(NSInteger)arg0 isRetry:(BOOL)arg1 ;
-(void)gateResponseAction:(NSInteger)arg0 isRetry:(BOOL)arg1 currentTime:(CGFloat)arg2 ;


@end


#endif