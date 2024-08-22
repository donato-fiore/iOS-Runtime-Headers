// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAPPINTERACTIONSCONTEXT_H
#define CKAPPINTERACTIONSCONTEXT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding>

 {
    ? _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
    ? numberOfDiscardedDonationsByIntentTypeAndBundleId;
}




+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateDiscardedDonations:(CGFloat)arg0 forIntentType:(id)arg1 andBundleId:(id)arg2 ;


@end


#endif