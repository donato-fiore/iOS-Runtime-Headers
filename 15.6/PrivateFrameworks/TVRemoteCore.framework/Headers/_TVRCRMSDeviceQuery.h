// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVRCRMSDEVICEQUERY_H
#define _TVRCRMSDEVICEQUERY_H

@class NSString, NSMutableDictionary;
@protocol TVRMSDiscoverySessionDelegate, _TVRCRMSDeviceQueryDelegate, TVRMSDiscoverySession;

#import <Foundation/Foundation.h>

#import "TVRMSService.h"

@interface _TVRCRMSDeviceQuery : NSObject <TVRMSDiscoverySessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_TVRCRMSDeviceQueryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<TVRMSDiscoverySession> *legacyDiscoverySession; // ivar: _legacyDiscoverySession
@property (retain, nonatomic) TVRMSService *service; // ivar: _service
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *wrapperToIdentifierMapping; // ivar: _wrapperToIdentifierMapping


-(BOOL)_shouldReportDevice:(id)arg0 ;
-(void)discoverySessionDidUpdateAvailableServices:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif