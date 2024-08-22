// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFMYRIADADVERTISEMENTCONTEXTMANAGER_H
#define AFMYRIADADVERTISEMENTCONTEXTMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFSettingsConnection.h"

@interface AFMyriadAdvertisementContextManager : NSObject {
    AFSettingsConnection *_settingsConnection;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)_settingsConnection;
-(id)initWithQueue:(id)arg0 ;
-(void)_resetSettingsConnection;
-(void)pushMyriadAdvertisementContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)reset;
-(void)triggerABCForType:(id)arg0 subType:(id)arg1 context:(id)arg2 ;


@end


#endif