// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNENUMCASEMETADATA_H
#define LNENUMCASEMETADATA_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNDisplayRepresentation.h"

@interface LNEnumCaseMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) LNDisplayRepresentation *displayRepresentation; // ivar: _displayRepresentation
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayRepresentation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif