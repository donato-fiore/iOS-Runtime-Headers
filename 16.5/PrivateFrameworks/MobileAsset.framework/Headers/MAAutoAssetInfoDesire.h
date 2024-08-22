// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETINFODESIRE_H
#define MAAUTOASSETINFODESIRE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MAAutoAssetPolicy.h"

@interface MAAutoAssetInfoDesire : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger checkWaitTimeoutSecs; // ivar: _checkWaitTimeoutSecs
@property (readonly, nonatomic) MAAutoAssetPolicy *clientAssetPolicy; // ivar: _clientAssetPolicy
@property (readonly, nonatomic) NSString *desireReason; // ivar: _desireReason
@property (readonly, nonatomic) BOOL downloadProgressDesired; // ivar: _downloadProgressDesired
@property (readonly, nonatomic) NSInteger lockWaitTimeoutSecs; // ivar: _lockWaitTimeoutSecs
@property (readonly, nonatomic) NSString *updateCategoryDesiredByClient; // ivar: _updateCategoryDesiredByClient


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDesiredCategory:(id)arg0 forClientAssetPolicy:(id)arg1 reasonDesired:(id)arg2 withCheckWaitTimeout:(NSInteger)arg3 withLockWaitTimeout:(NSInteger)arg4 desiringProgress:(BOOL)arg5 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif