// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECTAPTORADAR_H
#define SECTAPTORADAR_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SecTapToRadar : NSObject

@property (retain) NSString *alert; // ivar: _alert
@property (retain, nonatomic) NSString *componentID; // ivar: _componentID
@property (retain, nonatomic) NSString *componentName; // ivar: _componentName
@property (retain, nonatomic) NSString *componentVersion; // ivar: _componentVersion
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSString *radarDescription; // ivar: _radarDescription
@property (retain) NSString *radarnumber; // ivar: _radarnumber


+(BOOL)askUserIfTTR:(id)arg0 ;
+(BOOL)isRateLimited:(id)arg0 ;
+(id)keyname:(id)arg0 ;
+(void)disableTTRsEntirely;
+(void)triggerTapToRadar:(id)arg0 ;
-(BOOL)isRateLimited;
-(id)initTapToRadar:(id)arg0 description:(id)arg1 radar:(id)arg2 ;
-(void)clearRetryTimestamp;
-(void)trigger;
-(void)updateRetryTimestamp;


@end


#endif