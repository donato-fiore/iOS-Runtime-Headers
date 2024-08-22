// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPMANATEESTATECONTROLLER_H
#define CDPMANATEESTATECONTROLLER_H

@class NSString;
@protocol CDPDAuthListener, CDPDCircleListener, CDPDCircleProxy;

#import <Foundation/Foundation.h>


@interface CDPManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener>



@property (retain, nonatomic) NSObject<CDPDCircleProxy> *circleProxy; // ivar: _circleProxy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_checkSecurityEligibility:(*id)arg0 ;
-(BOOL)isManateeAvailable:(*id)arg0 ;
-(BOOL)isPrimaryAccountHSA2;
-(void)_didCreateCircleProxy;
-(void)_sendNotification:(char *)arg0 withValue:(NSUInteger)arg1 ;
-(void)circleStatusChanged;
-(void)circleViewStatusChanged;
-(void)reportManateeAvailable;
-(void)reportManateeUnavailable;
-(void)securityLevelChanged:(BOOL)arg0 ;


@end


#endif