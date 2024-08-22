// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPERSONALIZATIONFEATURECTRLOOKUPREQUEST_H
#define NTPERSONALIZATIONFEATURECTRLOOKUPREQUEST_H

@class FCPersonalizationFeature;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTPersonalizationFeatureCTRLookupRequest : NSObject <NSCopying>



@property (nonatomic) CGFloat clickPrior; // ivar: _clickPrior
@property (nonatomic) CGFloat impressionPrior; // ivar: _impressionPrior
@property (copy, nonatomic) FCPersonalizationFeature *personalizationFeature; // ivar: _personalizationFeature


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif