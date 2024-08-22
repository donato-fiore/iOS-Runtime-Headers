// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSOURCEREVISION_H
#define HKSOURCEREVISION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKSource.h"

@interface HKSourceRevision : NSObject <NSSecureCoding, NSCopying>



@property (readonly) ? operatingSystemVersion; // ivar: _operatingSystemVersion
@property (readonly, copy) NSString *productType; // ivar: _productType
@property (readonly) HKSource *source; // ivar: _source
@property (readonly) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)_initWithSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 version:(id)arg1 ;
-(id)initWithSource:(id)arg0 version:(id)arg1 productType:(id)arg2 operatingSystemVersion:(struct ? )arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif