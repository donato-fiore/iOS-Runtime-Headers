// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPACCOUNTLOGINCLUSTERLOGINPARAMS_H
#define CHIPACCOUNTLOGINCLUSTERLOGINPARAMS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CHIPAccountLoginClusterLoginParams : NSObject

@property (retain, nonatomic) NSString *setupPIN; // ivar: _setupPIN
@property (retain, nonatomic) NSString *tempAccountIdentifier; // ivar: _tempAccountIdentifier


-(id)init;


@end


#endif