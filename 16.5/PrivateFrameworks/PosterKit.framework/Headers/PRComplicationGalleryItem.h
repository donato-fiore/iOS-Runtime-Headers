// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCOMPLICATIONGALLERYITEM_H
#define PRCOMPLICATIONGALLERYITEM_H

@class LSBundleRecord;

#import <Foundation/Foundation.h>

#import "PRComplicationGalleryWidgetItem.h"

@interface PRComplicationGalleryItem : NSObject

@property (readonly, nonatomic) LSBundleRecord *bundleRecord; // ivar: _bundleRecord
@property (readonly, nonatomic) PRComplicationGalleryWidgetItem *widgetItem; // ivar: _widgetItem


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBundleRecord:(id)arg0 ;
-(id)initWithWidgetItem:(id)arg0 ;


@end


#endif