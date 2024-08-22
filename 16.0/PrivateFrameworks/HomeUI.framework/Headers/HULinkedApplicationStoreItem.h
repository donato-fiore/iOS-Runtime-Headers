// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HULINKEDAPPLICATIONSTOREITEM_H
#define HULINKEDAPPLICATIONSTOREITEM_H

@class AMSLookupItem;
@protocol NSCopying;


#import "HULinkedApplicationItem.h"

@interface HULinkedApplicationStoreItem : HULinkedApplicationItem <NSCopying>



@property (readonly, nonatomic) AMSLookupItem *storeItem; // ivar: _storeItem


-(id)_imageForSize:(struct CGSize )arg0 fromArtwork:(id)arg1 ;
-(id)_loadStoreIconWithArtwork:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)bundleIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStoreItem:(id)arg0 ;
-(id)initWithStoreItem:(id)arg0 associatedAccessories:(id)arg1 ;


@end


#endif