// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETPUSHNOTIFICATION_H
#define MAAUTOASSETPUSHNOTIFICATION_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MAAutoAssetUpdatePolicy.h"

@interface MAAutoAssetPushNotification : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *additionalPushParameters; // ivar: _additionalPushParameters
@property (readonly, nonatomic) NSString *assetSpecifier; // ivar: _assetSpecifier
@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (readonly, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (readonly, nonatomic) MAAutoAssetUpdatePolicy *autoUpdatePolicy; // ivar: _autoUpdatePolicy
@property (readonly, nonatomic) NSDictionary *historyRepresentation;
@property (nonatomic) NSInteger pushReason; // ivar: _pushReason


+(BOOL)supportsSecureCoding;
+(id)pushReasonName:(NSInteger)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPushReason:(NSInteger)arg0 ;
-(id)initWithPushReason:(NSInteger)arg0 forAssetType:(id)arg1 withAssetSpecifier:(id)arg2 matchingAssetVersion:(id)arg3 ;
-(id)initWithPushReason:(NSInteger)arg0 forAssetType:(id)arg1 withAssetSpecifier:(id)arg2 matchingAssetVersion:(id)arg3 withUpdatePolicy:(id)arg4 ;
-(id)initWithPushReason:(NSInteger)arg0 forAssetType:(id)arg1 withAssetSpecifier:(id)arg2 matchingAssetVersion:(id)arg3 withUpdatePolicy:(id)arg4 withAdditional:(id)arg5 ;
-(id)newAssetName;
-(id)newSummaryDictionary;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif