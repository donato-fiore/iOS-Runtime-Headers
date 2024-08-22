// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDIMPRESSIONPARAMSCONFIG_H
#define ASDIMPRESSIONPARAMSCONFIG_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDImpressionParamsConfig : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *adNetworkId; // ivar: _adNetworkId
@property (retain, nonatomic) NSNumber *appAdamId; // ivar: _appAdamId
@property (retain, nonatomic) NSString *attributionSignature; // ivar: _attributionSignature
@property (retain, nonatomic) NSNumber *campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSNumber *fidelityType; // ivar: _fidelityType
@property (retain, nonatomic) NSString *impressionId; // ivar: _impressionId
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSNumber *sourceAppAdamId; // ivar: _sourceAppAdamId
@property (retain, nonatomic) NSString *sourceAppBundleId; // ivar: _sourceAppBundleId
@property (retain, nonatomic) NSNumber *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif