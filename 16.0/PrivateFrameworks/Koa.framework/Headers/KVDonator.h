// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVDONATOR_H
#define KVDONATOR_H

@class NSString;
@protocol KVDonateServiceProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface KVDonator : NSObject {
    NSInteger _itemType;
    NSString *_originAppId;
    NSString *_userId;
    NSString *_deviceId;
    NSObject<KVDonateServiceProvider> *_serviceProvider;
    NSUInteger _timeoutNanos;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)donatorWithItemType:(NSInteger)arg0 originAppId:(id)arg1 deviceId:(id)arg2 userId:(id)arg3 error:(*id)arg4 ;
+(id)donatorWithItemType:(NSInteger)arg0 originAppId:(id)arg1 error:(*id)arg2 ;
+(id)donatorWithItemType:(NSInteger)arg0 originAppId:(id)arg1 userId:(id)arg2 error:(*id)arg3 ;
+(id)donatorWithServiceProvider:(id)arg0 itemType:(NSInteger)arg1 originAppId:(id)arg2 deviceId:(id)arg3 userId:(id)arg4 error:(*id)arg5 ;
+(id)donatorWithServiceProvider:(id)arg0 itemType:(NSInteger)arg1 originAppId:(id)arg2 error:(*id)arg3 ;
+(void)initialize;
-(id)init;
-(id)initWithQueue:(id)arg0 itemType:(NSInteger)arg1 originAppId:(id)arg2 deviceId:(id)arg3 userId:(id)arg4 serviceProvider:(id)arg5 timeoutNanos:(NSUInteger)arg6 ;
-(void)_donateWithServiceOptions:(unsigned short)arg0 version:(NSUInteger)arg1 validity:(id)arg2 usingStream:(id)arg3 ;
-(void)donateWithOptions:(unsigned short)arg0 usingStream:(id)arg1 ;
-(void)donateWithOptions:(unsigned short)arg0 version:(NSUInteger)arg1 validity:(id)arg2 usingStream:(id)arg3 ;


@end


#endif