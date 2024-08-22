// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONLAYOUTDECORATIONITEM_H
#define _UICOLLECTIONLAYOUTDECORATIONITEM_H

@class UICollectionLayoutItem, NSString;
@protocol NSCopying, _UICollectionLayoutAPIRespresenting;


#import "_UICollectionLayoutAnchor.h"

@interface _UICollectionLayoutDecorationItem : UICollectionLayoutItem <NSCopying, _UICollectionLayoutAPIRespresenting>

 {
    NSString *_elementKind;
    _UICollectionLayoutAnchor *_containerAnchor;
    Class _registrationViewClass;
    BOOL _isBackgroundDecoration;
}


@property (retain, nonatomic, setter=_setRegistrationViewClass:) Class _registrationViewClass;
@property (nonatomic) NSInteger zIndex; // ivar: _zIndex


+(id)backgroundDecorationItemWithElementKind:(id)arg0 ;
+(id)decorationItemWithSize:(id)arg0 elementKind:(id)arg1 containerAnchor:(id)arg2 ;
-(id)_apiRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(id)arg0 elementKind:(id)arg1 containerAnchor:(id)arg2 zIndex:(NSInteger)arg3 contentInsets:(struct NSDirectionalEdgeInsets )arg4 edgeSpacing:(id)arg5 name:(id)arg6 registrationViewClass:(Class)arg7 isBackgroundDecoration:(BOOL)arg8 ;


@end


#endif