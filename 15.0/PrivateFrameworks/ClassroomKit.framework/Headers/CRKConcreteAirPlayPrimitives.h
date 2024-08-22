// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCONCRETEAIRPLAYPRIMITIVES_H
#define CRKCONCRETEAIRPLAYPRIMITIVES_H

@class NSNotificationCenter, AVOutputContext;
@protocol CRKAirPlayPrimitives, CRKOutputDevice;

#import <Foundation/Foundation.h>


@interface CRKConcreteAirPlayPrimitives : NSObject <CRKAirPlayPrimitives>



@property (readonly, nonatomic) NSObject<CRKOutputDevice> *currentOutputDevice;
@property (readonly, nonatomic) NSObject<CRKOutputDevice> *localOutputDevice;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) AVOutputContext *outputContext; // ivar: _outputContext


-(id)beginOutputDeviceBrowsingSession;
-(id)initWithOutputContext:(id)arg0 notificationCenter:(id)arg1 ;
-(id)observeCurrentOutputDeviceChangesWithHandler:(id)arg0 ;


@end


#endif