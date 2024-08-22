// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HULINKEDAPPLICATIONINTERNALSIDELOADITEM_H
#define HULINKEDAPPLICATIONINTERNALSIDELOADITEM_H

@class NSString;
@protocol NSCopying;


#import "HULinkedApplicationItem.h"

@interface HULinkedApplicationInternalSideloadItem : HULinkedApplicationItem <NSCopying>

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