// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONLAYOUTITEM_H
#define _UICOLLECTIONLAYOUTITEM_H

@class NSArray, NSString;
@protocol NSCopying, _UICollectionLayoutAPIRespresenting;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutEdgeSpacing.h"
#import "_UICollectionLayoutSize.h"

@interface _UICollectionLayoutItem : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>

 {
    NSArray *_supplementaryItems;
    NSArray *_decorationItems;
}


@property (nonatomic) NSDirectionalEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) _UICollectionLayoutEdgeSpacing *edgeSpacing; // ivar: _edgeSpacing
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) _UICollectionLayoutSize *size; // ivar: _size


+(id)itemWithSize:(id)arg0 ;
+(id)itemWithSize:(id)arg0 decorationItems:(id)arg1 ;
+(id)itemWithSize:(id)arg0 supplementaryItems:(id)arg1 ;
+(id)itemWithSize:(id)arg0 supplementaryItems:(id)arg1 decorationItems:(id)arg2 ;
-(id)_apiRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(id)arg0 supplementaryItems:(id)arg1 decorationItems:(id)arg2 contentInsets:(struct NSDirectionalEdgeInsets )arg3 edgeSpacing:(id)arg4 name:(id)arg5 ;


@end


#endif