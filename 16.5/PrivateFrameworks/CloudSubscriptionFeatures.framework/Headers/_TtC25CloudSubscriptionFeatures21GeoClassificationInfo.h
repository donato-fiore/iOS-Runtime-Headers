// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC25CLOUDSUBSCRIPTIONFEATURES21GEOCLASSIFICATIONINFO_H
#define _TTC25CLOUDSUBSCRIPTIONFEATURES21GEOCLASSIFICATIONINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC25CloudSubscriptionFeatures21GeoClassificationInfo : NSObject <NSSecureCoding>

 {
    ? geoClassification;
    ? cacheTill;
    ? isBeta;
    ? featureKey;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSString *featureKey;
@property (nonatomic, readonly) NSUInteger status;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif