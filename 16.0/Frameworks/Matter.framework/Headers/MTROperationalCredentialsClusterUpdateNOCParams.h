// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERUPDATENOCPARAMS_H
#define MTROPERATIONALCREDENTIALSCLUSTERUPDATENOCPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterUpdateNOCParams : NSObject

@property (retain, nonatomic) NSData *icacValue; // ivar: _icacValue
@property (retain, nonatomic) NSData *nocValue; // ivar: _nocValue
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif