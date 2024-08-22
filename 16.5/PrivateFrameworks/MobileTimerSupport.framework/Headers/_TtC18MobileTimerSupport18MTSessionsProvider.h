// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18MOBILETIMERSUPPORT18MTSESSIONSPROVIDER_H
#define _TTC18MOBILETIMERSUPPORT18MTSESSIONSPROVIDER_H


#import <Foundation/Foundation.h>


@interface _TtC18MobileTimerSupport18MTSessionsProvider : NSObject {
    ? activities;
}




+(BOOL)supportsSessions;
-(BOOL)hasActiveTimerSession;
-(id)init;
-(void)createSessionWithContext:(id)arg0 completion:(id)arg1 ;
-(void)finishSessionWithTimerId:(id)arg0 completion:(id)arg1 ;
-(void)restoreSessionsWithCompletion:(id)arg0 ;
-(void)updateSessionWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif