// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCAPPLEPAYMANAGER_H
#define BCAPPLEPAYMANAGER_H

@protocol BCApplePayManagerProtocol, BCApplePayManagerDelegate;

#import <Foundation/Foundation.h>


@interface BCApplePayManager : NSObject <BCApplePayManagerProtocol>



@property (weak, nonatomic) NSObject<BCApplePayManagerDelegate> *delegate; // ivar: _delegate


-(NSInteger)applePayStatus;
-(id)initWithMessage:(id)arg0 delegate:(id)arg1 ;
-(id)message;
-(void)presentApplePayWithWindow:(id)arg0 ;


@end


#endif