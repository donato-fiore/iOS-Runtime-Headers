// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLALERTACTIVATIONASSERTION_H
#define TLALERTACTIVATIONASSERTION_H


#import <Foundation/Foundation.h>

#import "TLAlert.h"

@interface TLAlertActivationAssertion : NSObject {
    TLAlert *_alert;
    uint8_t _activeAcquisitionCount;
}




-(id)description;
-(id)initWithAlert:(id)arg0 ;
-(void)_acquire;
-(void)_relinquish;
-(void)acquire;
-(void)dealloc;
-(void)relinquish;


@end


#endif