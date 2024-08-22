// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASPOLICYMANAGER_H
#define ASPOLICYMANAGER_H

@protocol ASPolicyManagerDelegate;

#import <Foundation/Foundation.h>


@interface ASPolicyManager : NSObject

@property (weak, nonatomic) NSObject<ASPolicyManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL updatingPolicy; // ivar: _updatingPolicy


-(id)currentPolicyKey;
-(id)initWithAccount:(id)arg0 ;
-(void)policyFailedToUpdate;
-(void)policyKeyChanged:(id)arg0 ;
-(void)requestPolicyUpdate;


@end


#endif