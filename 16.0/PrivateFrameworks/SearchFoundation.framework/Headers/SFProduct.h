// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPRODUCT_H
#define SFPRODUCT_H

@class NSURL, NSString, NSDictionary, NSData;
@protocol SFProduct, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFProduct : NSObject <SFProduct, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSURL *availabilityURL; // ivar: _availabilityURL
@property (nonatomic) BOOL buyable; // ivar: _buyable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasBuyable;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif