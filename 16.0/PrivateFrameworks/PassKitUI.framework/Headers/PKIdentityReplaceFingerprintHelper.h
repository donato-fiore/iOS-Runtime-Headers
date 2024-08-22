// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKIDENTITYREPLACEFINGERPRINTHELPER_H
#define PKIDENTITYREPLACEFINGERPRINTHELPER_H

@class PKSecureElementPass, NSString;
@protocol PKDashboardMoreMenuFactoryEligibility;

#import <Foundation/Foundation.h>


@interface PKIdentityReplaceFingerprintHelper : NSObject <PKDashboardMoreMenuFactoryEligibility>

 {
    BOOL _isRemote;
    BOOL _canReplace;
    NSUInteger _loading;
    PKSecureElementPass *_pass;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasCachedEligibility;
-(BOOL)isEligibile;
-(id)initWithPass:(id)arg0 isRemote:(BOOL)arg1 ;
-(void)isEligibleWithCompletion:(id)arg0 ;
-(void)viewControllerWithCompletion:(id)arg0 ;


@end


#endif