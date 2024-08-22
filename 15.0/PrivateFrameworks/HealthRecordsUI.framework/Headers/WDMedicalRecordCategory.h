// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDMEDICALRECORDCATEGORY_H
#define WDMEDICALRECORDCATEGORY_H

@class NSDictionary, HKUIMetricColors, UIImage, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WDMedicalRecordCategory : NSObject <NSCopying>



@property (copy, nonatomic) NSDictionary *additionalPredicatesForCategory; // ivar: _additionalPredicatesForCategory
@property (retain, nonatomic) HKUIMetricColors *categoryMetricColors; // ivar: _categoryMetricColors
@property (nonatomic) NSInteger categoryType; // ivar: _categoryType
@property (retain, nonatomic) UIImage *displayImage; // ivar: _displayImage
@property (copy, nonatomic) NSString *displayImageName; // ivar: _displayImageName
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSArray *sampleTypes; // ivar: _sampleTypes


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif