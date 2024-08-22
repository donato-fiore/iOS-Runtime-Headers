// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAAUTOASSETINFOINSTANCE_H
#define MAAUTOASSETINFOINSTANCE_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MAAutoAssetSelector.h"

@interface MAAutoAssetInfoInstance : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *autoAssetClientName; // ivar: _autoAssetClientName
@property (readonly, nonatomic) MAAutoAssetSelector *clientAssetSelector; // ivar: _clientAssetSelector
@property (readonly, nonatomic) NSInteger clientProcessID; // ivar: _clientProcessID
@property (readonly, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName
@property (readonly, nonatomic) NSUUID *frameworkInstanceUUID; // ivar: _frameworkInstanceUUID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initForClientName:(id)arg0 withProcessName:(id)arg1 withProcessID:(NSInteger)arg2 usingAssetSelector:(id)arg3 associatingFrameworkUUID:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif