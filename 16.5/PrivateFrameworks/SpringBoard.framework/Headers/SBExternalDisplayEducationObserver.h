// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDISPLAYEDUCATIONOBSERVER_H
#define SBEXTERNALDISPLAYEDUCATIONOBSERVER_H

@protocol BNPosting;

#import <Foundation/Foundation.h>

#import "SBExternalDisplayEducationSession.h"

@interface SBExternalDisplayEducationObserver : NSObject {
    id<BNPosting> *_bannerPoster;
    SBExternalDisplayEducationSession *_educationSession;
}




-(id)initWithBannerPoster:(id)arg0 ;
-(void)_deviceConnectionWindowExpired:(id)arg0 ;
-(void)_extendedDisplayControllerDidConnect:(id)arg0 ;
-(void)_extendedDisplayControllerDidDisconnect:(id)arg0 ;
-(void)_hardwareAvailabilityChanged:(id)arg0 ;
-(void)dealloc;


@end


#endif