// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INOBJECTCOLLECTION_H
#define INOBJECTCOLLECTION_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INObjectCollection : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *allItems;
@property (readonly, copy, nonatomic) NSArray *sections; // ivar: _sections
@property (nonatomic) BOOL usesIndexedCollation; // ivar: _usesIndexedCollation


+(BOOL)supportsSecureCoding;
-(id)_typedObjectCollectionWithCodableAttribute:(id)arg0 ;
-(id)_untypedObjectCollectionWithItemClass:(Class)arg0 codableAttribute:(id)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)initWithSections:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif