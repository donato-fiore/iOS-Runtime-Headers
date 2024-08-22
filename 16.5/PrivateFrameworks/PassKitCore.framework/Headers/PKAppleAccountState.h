// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLEACCOUNTSTATE_H
#define PKAPPLEACCOUNTSTATE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAppleAccountState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isManaged; // ivar: _isManaged
@property (readonly, nonatomic) BOOL isPrimary; // ivar: _isPrimary
@property (readonly, nonatomic) BOOL isUbiquityDataclassEnabled; // ivar: _isUbiquityDataclassEnabled
@property (readonly, nonatomic) BOOL isWalletDataclassEnabled; // ivar: _isWalletDataclassEnabled


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif