// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIOMETRICKITUI_H
#define BIOMETRICKITUI_H


#import <Foundation/Foundation.h>


@interface BiometricKitUI : NSObject {
    BOOL _triggeredfromApplePay;
}




+(id)sharedInstance;
-(BOOL)triggeredFromApplePay;
-(id)getEnrollUIViewController:(int)arg0 bundleName:(id)arg1 ;
-(void)invalidateApplePayTrigger;
-(void)setTriggeredFromApplePay;


@end


#endif