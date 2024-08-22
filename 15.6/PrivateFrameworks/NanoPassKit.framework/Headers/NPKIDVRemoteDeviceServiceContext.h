// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKIDVREMOTEDEVICESERVICECONTEXT_H
#define NPKIDVREMOTEDEVICESERVICECONTEXT_H

@class NSMutableDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NPKIDVRemoteDeviceServiceContext : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_eventsToServiceNames;
}


@property (readonly, nonatomic) NSString *remoteDeviceID; // ivar: _remoteDeviceID


+(BOOL)supportsSecureCoding;
-(NSUInteger)_registeredEventsForServiceName:(id)arg0 ;
-(NSUInteger)registerEvents:(NSUInteger)arg0 forServiceName:(id)arg1 ;
-(NSUInteger)unregisterEvents:(NSUInteger)arg0 forServiceName:(id)arg1 ;
-(id)_serviceNamesForEventString:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)serviceNamesForEvent:(NSUInteger)arg0 ;
-(void)_setServiceNames:(id)arg0 forEventString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif