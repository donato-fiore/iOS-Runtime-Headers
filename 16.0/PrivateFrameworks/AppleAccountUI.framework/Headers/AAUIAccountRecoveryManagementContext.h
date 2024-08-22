// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIACCOUNTRECOVERYMANAGEMENTCONTEXT_H
#define AAUIACCOUNTRECOVERYMANAGEMENTCONTEXT_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface AAUIAccountRecoveryManagementContext : NSObject

@property (copy, nonatomic) NSString *icloudDataRecoveryDetailsHTTPMethod; // ivar: _icloudDataRecoveryDetailsHTTPMethod
@property (retain, nonatomic) NSURL *icloudDataRecoveryDetailsURL; // ivar: _icloudDataRecoveryDetailsURL
@property (copy, nonatomic) NSString *icloudDataRecoveryRowLabel; // ivar: _icloudDataRecoveryRowLabel
@property (nonatomic) BOOL icloudDataRecoveryShouldShowRow; // ivar: _icloudDataRecoveryShouldShowRow
@property (retain, nonatomic) NSURL *learnMoreURL; // ivar: _learnMoreURL
@property (nonatomic) BOOL recoveryKeyEligible; // ivar: _recoveryKeyEligible
@property (copy, nonatomic) NSString *recoveryKeyHTTPMethod; // ivar: _recoveryKeyHTTPMethod
@property (nonatomic) BOOL recoveryKeyIsOn; // ivar: _recoveryKeyIsOn
@property (retain, nonatomic) NSURL *recoveryKeyURL; // ivar: _recoveryKeyURL


-(id)description;


@end


#endif