// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRACCOUNTLOGINCLUSTERGETSETUPPINPARAMS_H
#define MTRACCOUNTLOGINCLUSTERGETSETUPPINPARAMS_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRAccountLoginClusterGetSetupPINParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSString *tempAccountIdentifier; // ivar: _tempAccountIdentifier
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif