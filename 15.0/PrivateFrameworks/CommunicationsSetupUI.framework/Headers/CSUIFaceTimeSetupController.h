// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSUIFACETIMESETUPCONTROLLER_H
#define CSUIFACETIMESETUPCONTROLLER_H


#import <Foundation/Foundation.h>


@interface CSUIFaceTimeSetupController : NSObject



+(id)sharedInstance;
-(BOOL)cellularFaceTimeEnabled;
-(id)init;
-(void)_handleFaceTimeEntitlementStatusChanged;
-(void)dealloc;
-(void)setCellularFaceTimeEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;


@end


#endif