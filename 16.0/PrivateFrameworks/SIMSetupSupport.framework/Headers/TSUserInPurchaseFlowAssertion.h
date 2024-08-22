// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUSERINPURCHASEFLOWASSERTION_H
#define TSUSERINPURCHASEFLOWASSERTION_H


#import <Foundation/Foundation.h>


@interface TSUserInPurchaseFlowAssertion : NSObject {
    int _assertionCounter;
}




+(id)sharedInstance;
-(id)init;
-(void)assertUserInPurchaseFlowStartOver:(BOOL)arg0 ;
-(void)deassertUserInPurchaseFlowWithForce:(BOOL)arg0 ;


@end


#endif