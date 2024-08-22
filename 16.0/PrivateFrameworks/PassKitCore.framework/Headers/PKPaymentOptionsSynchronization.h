// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTOPTIONSSYNCHRONIZATION_H
#define PKPAYMENTOPTIONSSYNCHRONIZATION_H

@protocol PKPaymentOptionsSynchronizationDelegate;

#import <Foundation/Foundation.h>


@interface PKPaymentOptionsSynchronization : NSObject

@property (weak, nonatomic) NSObject<PKPaymentOptionsSynchronizationDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldSyncToCloud; // ivar: _shouldSyncToCloud


-(id)init;
-(void)_localeDidChangeNotification:(id)arg0 ;
-(void)_updateSynchronizationBehavior;


@end


#endif