// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONVIEWITEMKEY_H
#define _UICOLLECTIONVIEWITEMKEY_H

@class NSString, NSIndexPath;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UICollectionViewItemKey : NSObject <NSCopying>



@property (readonly, retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) BOOL isClone; // ivar: _isClone
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)collectionItemKeyForCellWithIndexPath:(id)arg0 ;
+(id)collectionItemKeyForDecorationViewOfKind:(id)arg0 andIndexPath:(id)arg1 ;
+(id)collectionItemKeyForLayoutAttributes:(id)arg0 ;
+(id)collectionItemKeyForSupplementaryViewOfKind:(id)arg0 andIndexPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyAsClone:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 indexPath:(id)arg1 identifier:(id)arg2 ;
-(id)initWithType:(NSUInteger)arg0 indexPath:(id)arg1 identifier:(id)arg2 clone:(BOOL)arg3 ;


@end


#endif