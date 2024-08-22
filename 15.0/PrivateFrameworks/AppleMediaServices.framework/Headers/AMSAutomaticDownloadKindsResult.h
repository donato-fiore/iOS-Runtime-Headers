// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSAUTOMATICDOWNLOADKINDSRESULT_H
#define AMSAUTOMATICDOWNLOADKINDSRESULT_H

@class ACAccount, NSArray;

#import <Foundation/Foundation.h>


@interface AMSAutomaticDownloadKindsResult : NSObject

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSArray *enabledMediaKinds; // ivar: _enabledMediaKinds


-(id)initWithAccount:(id)arg0 andEnabledMediaKinds:(id)arg1 ;


@end


#endif