// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXMSAMPLETAG_H
#define MXMSAMPLETAG_H

@class NSOrderedSet, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "MXMSampleTag.h"

@interface MXMSampleTag : NSObject <NSSecureCoding, NSCopying>

 {
    NSOrderedSet *_taxonomy;
}


@property (readonly, copy, nonatomic) NSString *domainNameString;
@property (readonly, copy, nonatomic) MXMSampleTag *parent; // ivar: _parent


+(BOOL)supportsSecureCoding;
+(id)ancestery;
-(BOOL)containsTag:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualTo:(id)arg0 ;
-(BOOL)isEqualToTag:(id)arg0 ;
-(NSUInteger)hash;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComponents:(id)arg0 ;
-(id)initWithDNString:(id)arg0 ;
-(id)initWithTaxonomy:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif