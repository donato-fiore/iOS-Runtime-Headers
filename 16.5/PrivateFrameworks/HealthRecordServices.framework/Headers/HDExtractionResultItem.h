// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDEXTRACTIONRESULTITEM_H
#define HDEXTRACTIONRESULTITEM_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HDOriginalFHIRResourceObject.h"

@interface HDExtractionResultItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly, copy, nonatomic) HDOriginalFHIRResourceObject *originalFHIRResource; // ivar: _originalFHIRResource
@property (readonly, copy, nonatomic) NSArray *units; // ivar: _units


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginalFHIRResource:(id)arg0 units:(id)arg1 flags:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif