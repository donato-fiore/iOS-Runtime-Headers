// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSETUPASSISTANTCONTEXT_H
#define PKSETUPASSISTANTCONTEXT_H

@class NSData;
@protocol PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKSetupAssistantContext : NSObject

@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSData *externalizedContext; // ivar: _externalizedContext


-(id)description;
-(void)_updateDescription:(id)arg0 ;


@end


#endif