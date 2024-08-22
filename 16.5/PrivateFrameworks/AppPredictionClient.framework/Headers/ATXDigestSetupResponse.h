// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDIGESTSETUPRESPONSE_H
#define ATXDIGESTSETUPRESPONSE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXDigestSetupResponse : NSObject

@property (readonly, nonatomic) NSUInteger avgNumBasicNotifications; // ivar: _avgNumBasicNotifications
@property (readonly, nonatomic) NSUInteger avgNumMessageNotifications; // ivar: _avgNumMessageNotifications
@property (readonly, nonatomic) NSUInteger avgNumTimeSensitiveNonMessageNotifications; // ivar: _avgNumTimeSensitiveNonMessageNotifications
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSUInteger numBasicNotifications; // ivar: _numBasicNotifications
@property (readonly, nonatomic) NSUInteger numMessageNotifications; // ivar: _numMessageNotifications
@property (readonly, nonatomic) NSUInteger numTimeSensitiveNonMessageNotifications; // ivar: _numTimeSensitiveNonMessageNotifications


-(id)initWithBundleId:(id)arg0 avgNumBasicNotifications:(NSUInteger)arg1 avgNumMessageNotifications:(NSUInteger)arg2 avgNumTimeSensitiveNonMessageNotifications:(NSUInteger)arg3 numBasicNotifications:(NSUInteger)arg4 numMessageNotifications:(NSUInteger)arg5 numTimeSensitiveNonMessageNotifications:(NSUInteger)arg6 ;


@end


#endif