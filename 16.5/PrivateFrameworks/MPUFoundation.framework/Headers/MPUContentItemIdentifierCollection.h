// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPUCONTENTITEMIDENTIFIERCOLLECTION_H
#define MPUCONTENTITEMIDENTIFIERCOLLECTION_H

@class NSMapTable;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPUContentItemIdentifierCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSMapTable *_identifierTypeToIdentifier;
}


@property (readonly, nonatomic) NSUInteger identifierCount;
@property (readonly, nonatomic) NSUInteger itemType; // ivar: _itemType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_copyWithZone:(struct _NSZone *)arg0 class:(Class)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)identifierForIdentifierType:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemType:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_setIdentifier:(id)arg0 forIdentifierType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateIdentifiersUsingBlock:(id)arg0 ;


@end


#endif