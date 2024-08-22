// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKCLOUDSERVICESETUPCONFIGURATION_H
#define SKCLOUDSERVICESETUPCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKCloudServiceSetupConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy, nonatomic) NSString *applicationVersion; // ivar: _applicationVersion
@property (nonatomic) BOOL forPublicSDK; // ivar: _forPublicSDK
@property (nonatomic) BOOL targetsFinanceApplication; // ivar: _targetsFinanceApplication


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif