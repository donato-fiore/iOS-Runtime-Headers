// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCONTACTALLOWLIST_H
#define PRCONTACTALLOWLIST_H

@class NSMutableArray, NSString;
@protocol PRBeaconListenerDelegate, OS_os_log;

#import <Foundation/Foundation.h>

#import "PRBeaconListener.h"

@interface PRContactAllowlist : NSObject <PRBeaconListenerDelegate>

 {
    NSObject<OS_os_log> *_logger;
    NSMutableArray *_allowlist;
    PRBeaconListener *_nearbyDaemonSession;
    BOOL _needToRestart;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)addTrustedContact:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)beaconListener:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)beaconListener:(id)arg0 didFailWithError:(id)arg1 ;
-(void)clear:(id)arg0 ;
-(void)removeTrustedContact:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif