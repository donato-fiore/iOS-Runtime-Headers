// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOKERBEROSEXTENSIONUSERDATA_H
#define SOKERBEROSEXTENSIONUSERDATA_H


#import <Foundation/Foundation.h>


@interface SOKerberosExtensionUserData : NSObject

@property (nonatomic) BOOL useKeychain;
@property (nonatomic) BOOL useSmartCard;
@property (nonatomic) BOOL userSetKeychainChoice;


-(id)init;


@end


#endif