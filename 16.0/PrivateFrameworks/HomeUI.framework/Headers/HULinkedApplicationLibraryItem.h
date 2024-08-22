// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HULINKEDAPPLICATIONLIBRARYITEM_H
#define HULINKEDAPPLICATIONLIBRARYITEM_H

@class LSApplicationProxy;
@protocol NSCopying;


#import "HULinkedApplicationItem.h"

@interface HULinkedApplicationLibraryItem : HULinkedApplicationItem <NSCopying>



@property (readonly, nonatomic) LSApplicationProxy *applicationProxy; // ivar: _applicationProxy


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)bundleIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithApplicationProxy:(id)arg0 ;
-(id)initWithApplicationProxy:(id)arg0 associatedAccessories:(id)arg1 ;


@end


#endif