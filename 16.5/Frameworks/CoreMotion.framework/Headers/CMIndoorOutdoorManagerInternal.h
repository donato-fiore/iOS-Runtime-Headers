// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMINDOOROUTDOORMANAGERINTERNAL_H
#define CMINDOOROUTDOORMANAGERINTERNAL_H

@protocol OS_dispatch_queue, CMIndoorOutdoorDelegate;

#import <Foundation/Foundation.h>

#import "CMIndoorOutdoorManager.h"

@interface CMIndoorOutdoorManagerInternal : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    id<CMIndoorOutdoorDelegate> *_delegate;
    CMIndoorOutdoorManager *_sender;
    *void _connection;
    BOOL _startedUpdates;
}




-(id)init;
-(void)_lastKnownIndoorOutdoorStateWithHandler:(id)arg0 ;
-(void)_startIndoorOutdoorUpdates;
-(void)_stopIndoorOutdoorUpdates;
-(void)_teardown;
-(void)dealloc;


@end


#endif