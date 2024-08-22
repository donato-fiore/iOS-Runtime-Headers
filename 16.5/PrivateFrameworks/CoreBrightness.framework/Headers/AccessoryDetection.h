// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCESSORYDETECTION_H
#define ACCESSORYDETECTION_H

@class ACCConnectionInfo, NSString;
@protocol ACCConnectionInfoDelegateProtocol, OS_os_log;

#import <Foundation/Foundation.h>


@interface AccessoryDetection : NSObject <ACCConnectionInfoDelegateProtocol>

 {
    NSObject<OS_os_log> *_logHandle;
    ACCConnectionInfo *_connection;
    NSString *_sleeveUUID;
    *void _aabc;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAABC:(*void)arg0 ;
-(void)accessoryEndpointAttached:(id)arg0 transportType:(int)arg1 protocol:(int)arg2 properties:(id)arg3 forConnection:(id)arg4 ;
-(void)accessoryEndpointDetached:(id)arg0 forConnection:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif