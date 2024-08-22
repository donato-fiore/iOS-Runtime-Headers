// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPLACESMAPLAYOUTCHANGE_H
#define PXPLACESMAPLAYOUTCHANGE_H

@protocol PXPlacesMapLayoutItem;

#import <Foundation/Foundation.h>


@interface PXPlacesMapLayoutChange : NSObject

@property (readonly, nonatomic) NSObject<PXPlacesMapLayoutItem> *sourceLayoutItem; // ivar: _sourceLayoutItem
@property (readonly, nonatomic) NSObject<PXPlacesMapLayoutItem> *targetLayoutItem; // ivar: _targetLayoutItem
@property (readonly) NSInteger type; // ivar: _type


-(id)description;
-(id)initWithSourceLayoutItem:(id)arg0 targetLayoutItem:(id)arg1 type:(NSInteger)arg2 ;


@end


#endif