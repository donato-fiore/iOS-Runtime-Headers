// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSACCOUNTDEVICEINFORESULT_H
#define AMSACCOUNTDEVICEINFORESULT_H

@class ACAccount, NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSAccountDeviceInfoResult : NSObject

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSNumber *isBundleOwner;
@property (readonly, nonatomic) NSDictionary *rawResult; // ivar: _rawResult


-(id)description;
-(id)initWithAccount:(id)arg0 responseDictionary:(id)arg1 ;


@end


#endif