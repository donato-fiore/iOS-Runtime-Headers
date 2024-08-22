// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNQUERYPARAMETERMETADATA_H
#define LNQUERYPARAMETERMETADATA_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNStaticDeferredLocalizedString.h"

@interface LNQueryParameterMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *comparators; // ivar: _comparators
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *localizedTitle; // ivar: _localizedTitle
@property (readonly, copy, nonatomic) NSString *propertyIdentifier; // ivar: _propertyIdentifier
@property (readonly, copy, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyIdentifier:(id)arg0 localizedTitle:(id)arg1 comparators:(id)arg2 ;
-(id)initWithPropertyIdentifier:(id)arg0 title:(id)arg1 comparators:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif