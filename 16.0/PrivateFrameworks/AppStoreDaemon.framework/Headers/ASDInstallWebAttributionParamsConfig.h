// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDINSTALLWEBATTRIBUTIONPARAMSCONFIG_H
#define ASDINSTALLWEBATTRIBUTIONPARAMSCONFIG_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDInstallWebAttributionParamsConfig : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *adNetworkRegistrableDomain; // ivar: _adNetworkRegistrableDomain
@property (retain, nonatomic) NSNumber *appAdamId; // ivar: _appAdamId
@property (nonatomic) NSInteger attributionContext; // ivar: _attributionContext
@property (retain, nonatomic) NSString *impressionId; // ivar: _impressionId
@property (retain, nonatomic) NSString *sourceWebRegistrableDomain; // ivar: _sourceWebRegistrableDomain
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif