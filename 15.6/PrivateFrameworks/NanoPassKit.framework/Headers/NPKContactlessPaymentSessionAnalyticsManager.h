// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKCONTACTLESSPAYMENTSESSIONANALYTICSMANAGER_H
#define NPKCONTACTLESSPAYMENTSESSIONANALYTICSMANAGER_H

@class NSString;
@protocol NPKContactlessPaymentSessionManagerObserver;

#import <Foundation/Foundation.h>

#import "NPKContactlessPaymentSessionState.h"

@interface NPKContactlessPaymentSessionAnalyticsManager : NSObject <NPKContactlessPaymentSessionManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NPKContactlessPaymentSessionState *previousState; // ivar: _previousState
@property (readonly) Class superclass;


-(id)init;
-(void)contactlessPaymentSessionManager:(id)arg0 didChangeSessionState:(id)arg1 ;


@end


#endif