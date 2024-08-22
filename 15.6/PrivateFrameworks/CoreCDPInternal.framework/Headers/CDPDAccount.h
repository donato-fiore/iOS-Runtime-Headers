// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDACCOUNT_H
#define CDPDACCOUNT_H


#import <Foundation/Foundation.h>


@interface CDPDAccount : NSObject

@property (nonatomic) BOOL hasDisabledKeychainExplicitly;


-(BOOL)isICDPEnabledForDSID:(id)arg0 checkWithServer:(BOOL)arg1 ;


@end


#endif