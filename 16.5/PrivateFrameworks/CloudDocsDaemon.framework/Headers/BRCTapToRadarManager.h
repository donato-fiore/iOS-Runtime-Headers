// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCTAPTORADARMANAGER_H
#define BRCTAPTORADARMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRCTapToRadarManager : NSObject {
    NSObject<OS_dispatch_queue> *_executionQueue;
}




-(BOOL)_hasTapToRadarOSX;
-(id)init;
-(void)_launchRadarURLWithAttributes:(id)arg0 ;
-(void)_launchTapToRadar;
-(void)_notifyUserAboutRadarURLWithAttributes:(id)arg0 ;
-(void)_notifyUserAboutTapToRadar;
-(void)requestTapToRadarWithTitle:(id)arg0 description:(id)arg1 componentName:(id)arg2 componentVersion:(id)arg3 componentID:(NSInteger)arg4 keywords:(id)arg5 attachments:(id)arg6 sendFullLog:(BOOL)arg7 displayReason:(id)arg8 ;
-(void)requestTapToRadarWithTitle:(id)arg0 description:(id)arg1 keywords:(id)arg2 attachments:(id)arg3 sendFullLog:(BOOL)arg4 displayReason:(id)arg5 ;


@end


#endif