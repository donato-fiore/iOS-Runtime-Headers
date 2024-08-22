// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPMANATEESTATECONTROLLER_H
#define CDPMANATEESTATECONTROLLER_H

@class NSString;
@protocol CDPDAuthListener, CDPDCircleListener, CDPDCircleProxy;

#import <Foundation/Foundation.h>

#import "CDPContext.h"

@interface CDPManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener>

 {
    CDPContext *_context;
}


@property (retain, nonatomic) NSObject<CDPDCircleProxy> *circleProxy; // ivar: _circleProxy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_checkSecurityEligibilityForContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)_isPrimaryAccount:(id)arg0 ;
-(BOOL)isManateeAvailable:(*id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)_didCreateCircleProxy;
-(void)_reportManateeAvailability:(BOOL)arg0 value:(NSUInteger)arg1 ;
-(void)_sendNotification:(char *)arg0 withUserInfo:(id)arg1 ;
-(void)checkCircleStatusAndSendManateeAvailabilityNotification;
-(void)circleStatusChanged;
-(void)circleViewStatusChanged;
-(void)securityLevelChanged:(BOOL)arg0 forAltDSID:(id)arg1 ;


@end


#endif