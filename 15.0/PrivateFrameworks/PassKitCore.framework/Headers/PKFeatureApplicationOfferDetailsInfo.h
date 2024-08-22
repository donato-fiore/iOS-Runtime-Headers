// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKFEATUREAPPLICATIONOFFERDETAILSINFO_H
#define PKFEATUREAPPLICATIONOFFERDETAILSINFO_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKFeatureApplicationOfferDetailsInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *body; // ivar: _body
@property (copy, nonatomic) NSString *disclosureTitle; // ivar: _disclosureTitle
@property (copy, nonatomic) NSString *heroImageURL; // ivar: _heroImageURL
@property (nonatomic) NSUInteger layout; // ivar: _layout
@property (copy, nonatomic) NSString *primaryActionTitle; // ivar: _primaryActionTitle
@property (copy, nonatomic) NSString *secondaryActionTitle; // ivar: _secondaryActionTitle
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif