// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAQISCALE_H
#define WFAQISCALE_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFAQIScaleGradient.h"

@interface WFAQIScale : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic, getter=isAscending) BOOL ascending; // ivar: _ascending
@property (copy, nonatomic) NSArray *categories; // ivar: _categories
@property (copy, nonatomic) NSString *displayLabel; // ivar: _displayLabel
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) WFAQIScaleGradient *gradient; // ivar: _gradient
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, getter=isNumerical) BOOL numerical; // ivar: _numerical
@property (nonatomic) _NSRange range; // ivar: _range


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScale:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif