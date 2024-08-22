// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERPRODUCTASSESSMENTCOLLECTION_H
#define PKPAYLATERPRODUCTASSESSMENTCOLLECTION_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterProductAssessmentCollection : NSObject <NSSecureCoding, NSCopying>

 {
    NSDictionary *_productAssessments;
    NSArray *_eligibleProductAssessments;
    NSArray *_ineligibleProductAssessments;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)eligibleProductAssessments;
-(id)financingOptionWithSelectionIdentifier:(id)arg0 productType:(NSUInteger)arg1 ;
-(id)ineligibleProductAssessments;
-(id)initWithArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)productAssessmentForProductType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif