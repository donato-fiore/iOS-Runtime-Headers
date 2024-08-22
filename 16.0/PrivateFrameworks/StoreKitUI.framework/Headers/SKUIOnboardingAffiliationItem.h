// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIONBOARDINGAFFILIATIONITEM_H
#define SKUIONBOARDINGAFFILIATIONITEM_H

@class UIColor, NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIOnboardingAffiliationItem : NSObject <NSCopying>



@property (copy, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *imageName; // ivar: _imageName
@property (copy, nonatomic) NSString *imageTreatment; // ivar: _imageTreatment
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger userAffinityCount; // ivar: _userAffinityCount


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif