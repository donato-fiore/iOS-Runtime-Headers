// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBWALLETPASSACTION_H
#define AMSUIWEBWALLETPASSACTION_H

@class NSNumber;


#import "AMSUIWebAction.h"

@interface AMSUIWebWalletPassAction : AMSUIWebAction

@property (nonatomic) BOOL attemptLynxProvisioning; // ivar: _attemptLynxProvisioning
@property (retain, nonatomic) NSNumber *lookupFeature; // ivar: _lookupFeature


-(id)_lookupPassForIdentifier:(NSUInteger)arg0 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif