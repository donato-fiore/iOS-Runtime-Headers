// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFMEDIAREMOTEDEVICEINFO_H
#define AFMEDIAREMOTEDEVICEINFO_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFInstanceContext.h"

@interface AFMediaRemoteDeviceInfo : NSObject {
    NSString *_routeIdentifier;
    NSString *_groupIdentifier;
    AFInstanceContext *_instanceContext;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


+(id)currentDevice;
+(id)localDeviceInfo;
-(id)init;
-(void)_activeDeviceInfoChanged:(id)arg0 ;
-(void)_getMRDeviceInfoWithCompletion:(id)arg0 ;
-(void)_updateWithRouteIdentifier:(id)arg0 groupIdentifier:(id)arg1 ;
-(void)getGroupIdentifierWithCompletion:(id)arg0 ;
-(void)getRouteIdentifierWithCompletion:(id)arg0 ;


@end


#endif