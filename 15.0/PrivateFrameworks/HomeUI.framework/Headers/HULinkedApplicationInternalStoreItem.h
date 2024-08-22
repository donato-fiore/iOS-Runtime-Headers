// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULINKEDAPPLICATIONINTERNALSTOREITEM_H
#define HULINKEDAPPLICATIONINTERNALSTOREITEM_H

@class NSString;
@protocol NSCopying;


#import "HULinkedApplicationItem.h"

@interface HULinkedApplicationInternalStoreItem : HULinkedApplicationItem <NSCopying>

 {
    NSString *_bundleIdentifier;
}




-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)bundleIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 associatedAccessories:(id)arg1 ;


@end


#endif