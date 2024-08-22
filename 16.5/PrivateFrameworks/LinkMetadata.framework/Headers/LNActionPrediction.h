// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNACTIONPREDICTION_H
#define LNACTIONPREDICTION_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNDisplayRepresentation.h"

@interface LNActionPrediction : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) LNDisplayRepresentation *displayRepresentation; // ivar: _displayRepresentation
@property (readonly, copy, nonatomic) NSArray *parameterIdentifiers; // ivar: _parameterIdentifiers


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameterIdentifiers:(id)arg0 displayRepresentation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif