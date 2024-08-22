// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APINSTALLATTRIBUTION_H
#define APINSTALLATTRIBUTION_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface APInstallAttribution : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *adNetworkId; // ivar: _adNetworkId
@property (nonatomic) NSUInteger adamId; // ivar: _adamId
@property (retain, nonatomic) NSString *attributionSignature; // ivar: _attributionSignature
@property (nonatomic) NSUInteger campaignId; // ivar: _campaignId
@property (retain, nonatomic) NSUUID *contextIdentifier; // ivar: _contextIdentifier
@property (nonatomic) NSUInteger sourceAppAdamId; // ivar: _sourceAppAdamId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif