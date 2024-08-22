// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSCHOOLMODEMANAGERCONFIGURATION_H
#define SCLSCHOOLMODEMANAGERCONFIGURATION_H

@class NRPairedDeviceRegistry, IDSService;
@protocol NSCopying, OS_dispatch_workloop;

#import <Foundation/Foundation.h>


@interface SCLSchoolModeManagerConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL allowsNonTinkerPairing; // ivar: _allowsNonTinkerPairing
@property (retain, nonatomic) NRPairedDeviceRegistry *deviceRegistry; // ivar: _deviceRegistry
@property (nonatomic) BOOL managesSchoolTimeSession; // ivar: _managesSchoolTimeSession
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop; // ivar: _workloop


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif