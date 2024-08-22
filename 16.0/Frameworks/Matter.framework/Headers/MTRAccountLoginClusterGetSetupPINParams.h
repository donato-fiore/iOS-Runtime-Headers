// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRACCOUNTLOGINCLUSTERGETSETUPPINPARAMS_H
#define MTRACCOUNTLOGINCLUSTERGETSETUPPINPARAMS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRAccountLoginClusterGetSetupPINParams : NSObject

@property (retain, nonatomic) NSString *tempAccountIdentifier; // ivar: _tempAccountIdentifier
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif