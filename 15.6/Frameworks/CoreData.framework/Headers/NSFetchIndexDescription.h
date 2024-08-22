// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFETCHINDEXDESCRIPTION_H
#define NSFETCHINDEXDESCRIPTION_H

@class NSString, NSArray, NSPredicate;
@protocol NSSecureCoding, NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSEntityDescription.h"

@interface NSFetchIndexDescription : NSObject <NSSecureCoding, NSCoding, NSCopying>

 {
    NSString *_name;
    NSArray *_elements;
    NSEntityDescription *_entity;
    NSPredicate *_partialIndexPredicate;
}


@property (copy) NSArray *elements;
@property (readonly, nonatomic) NSEntityDescription *entity;
@property (copy) NSString *name;
@property (copy) NSPredicate *partialIndexPredicate;


+(BOOL)supportsSecureCoding;
-(BOOL)_isEditable;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 elements:(id)arg1 ;
-(id)initWithName:(id)arg0 predicate:(id)arg1 elements:(id)arg2 entity:(id)arg3 ;
-(void)_throwIfNotEditable;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif