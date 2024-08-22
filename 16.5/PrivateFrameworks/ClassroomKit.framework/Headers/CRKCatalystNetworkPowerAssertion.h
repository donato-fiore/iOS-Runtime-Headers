// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCATALYSTNETWORKPOWERASSERTION_H
#define CRKCATALYSTNETWORKPOWERASSERTION_H

@protocol CATCancelable;

#import <Foundation/Foundation.h>


@interface CRKCatalystNetworkPowerAssertion : NSObject <CATCancelable>



@property (nonatomic, getter=isCanceled) BOOL canceled; // ivar: _canceled


-(void)cancel;
-(void)dealloc;


@end


#endif