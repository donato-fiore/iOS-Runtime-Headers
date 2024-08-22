// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNACTIONDESCRIPTIONMETADATA_H
#define LNACTIONDESCRIPTIONMETADATA_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNDisplayRepresentation.h"
#import "LNStaticDeferredLocalizedString.h"

@interface LNActionDescriptionMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) LNDisplayRepresentation *categoryName; // ivar: _categoryName
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *descriptionText; // ivar: _descriptionText
@property (readonly, copy, nonatomic) NSArray *searchKeywords; // ivar: _searchKeywords


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptionText:(id)arg0 categoryName:(id)arg1 searchKeywords:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif