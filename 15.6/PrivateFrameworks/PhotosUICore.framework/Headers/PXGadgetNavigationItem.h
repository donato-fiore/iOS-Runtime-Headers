// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGADGETNAVIGATIONITEM_H
#define PXGADGETNAVIGATIONITEM_H

@class NSString;
@protocol PXGadget;

#import <Foundation/Foundation.h>


@interface PXGadgetNavigationItem : NSObject

@property (readonly, nonatomic) BOOL animated; // ivar: _animated
@property (readonly, nonatomic) NSObject<PXGadget> *gadget; // ivar: _gadget
@property (readonly, nonatomic) NSString *gadgetId; // ivar: _gadgetId
@property (readonly, nonatomic) NSUInteger gadgetType; // ivar: _gadgetType
@property (readonly, copy, nonatomic) id *navigationBlock; // ivar: _navigationBlock
@property (readonly, nonatomic) NSInteger navigationType; // ivar: _navigationType


// -(id)initWithGadetType:(NSUInteger)arg0 navigationBlock:(id)arg1 animated:(unk)arg2  ;
// -(id)initWithGadget:(id)arg0 navigationBlock:(id)arg1 animated:(unk)arg2  ;
// -(id)initWithGadgetId:(id)arg0 navigationBlock:(id)arg1 animated:(unk)arg2  ;


@end


#endif