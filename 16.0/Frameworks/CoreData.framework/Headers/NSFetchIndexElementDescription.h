// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSFETCHINDEXELEMENTDESCRIPTION_H
#define NSFETCHINDEXELEMENTDESCRIPTION_H

@class NSString;
@protocol NSSecureCoding, NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSPropertyDescription.h"
#import "NSFetchIndexDescription.h"

@interface NSFetchIndexElementDescription : NSObject <NSSecureCoding, NSCoding, NSCopying>

 {
    NSPropertyDescription *_property;
    NSUInteger _collationType;
    NSFetchIndexDescription *_indexDescription;
    __indexElementDescriptionFlags _indexElementDescriptionFlags;
}


@property (getter=isAscending) BOOL ascending;
@property NSUInteger collationType;
@property (readonly, nonatomic) NSFetchIndexDescription *indexDescription;
@property (readonly, retain) NSPropertyDescription *property;
@property (readonly, retain) NSString *propertyName; // ivar: _propertyName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperty:(id)arg0 collationType:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif