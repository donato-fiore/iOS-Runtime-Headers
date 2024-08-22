// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIIMAGEREGION_H
#define VIIMAGEREGION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VIImageRegion : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *domainInfo; // ivar: _domainInfo
@property (readonly, nonatomic) CGRect regionOfInterest; // ivar: _regionOfInterest


+(id)regionForEntireImageWithDomains:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRegionOfInterest:(struct CGRect )arg0 domainInfo:(id)arg1 ;
-(id)initWithRegionOfInterest:(struct CGRect )arg0 domains:(id)arg1 ;


@end


#endif