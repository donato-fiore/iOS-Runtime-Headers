// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUISTOREACQUISITIONPROPERTIES_H
#define VUISTOREACQUISITIONPROPERTIES_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIStoreAcquisitionProperties : NSObject <NSCopying>



@property (copy, nonatomic) NSString *buyParams; // ivar: _buyParams
@property (copy, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (nonatomic) BOOL ignoresForcedPasswordRestriction; // ivar: _ignoresForcedPasswordRestriction
@property (copy, nonatomic) NSString *strongToken; // ivar: _strongToken
@property (copy, nonatomic) NSString *urlBagKey; // ivar: _urlBagKey
@property (copy, nonatomic) NSString *userAgent; // ivar: _userAgent


+(id)acquisitionPropertiesWithBuyParams:(id)arg0 urlbagKey:(id)arg1 ;
+(id)metricsAugumentedBuyParamsWithBuyParams:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif