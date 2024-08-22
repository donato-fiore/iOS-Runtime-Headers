// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSESSIONSMANAGER_H
#define MTSESSIONSMANAGER_H


#import <Foundation/Foundation.h>

#import "_TtC18MobileTimerSupport18MTSessionsProvider.h"

@interface MTSessionsManager : NSObject

@property (retain, nonatomic) _TtC18MobileTimerSupport18MTSessionsProvider *provider; // ivar: _provider


+(BOOL)supportsSessions;
-(BOOL)hasActiveTimerSession;
-(NSInteger)sessionStateForTimer:(id)arg0 ;
-(id)contextWithTimer:(id)arg0 ;
-(id)init;
-(void)createSessionWithTimer:(id)arg0 ;
-(void)finishSessionWithTimer:(id)arg0 ;
-(void)localSetup;
-(void)updateSessionWithTimer:(id)arg0 ;


@end


#endif