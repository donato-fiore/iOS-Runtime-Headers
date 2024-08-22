// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INRIDEFARELINEITEM_H
#define INRIDEFARELINEITEM_H

@class NSString, NSDecimalNumber;
@protocol INRideFareLineItemExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INRideFareLineItem : NSObject <INRideFareLineItemExport, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDecimalNumber *price; // ivar: _price
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 price:(id)arg1 currencyCode:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif