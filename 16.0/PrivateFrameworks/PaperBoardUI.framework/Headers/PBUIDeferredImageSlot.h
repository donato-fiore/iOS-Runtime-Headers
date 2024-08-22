// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIDEFERREDIMAGESLOT_H
#define PBUIDEFERREDIMAGESLOT_H

@class NSHashTable, UIColor;


#import "PBUIImageSlot.h"

@interface PBUIDeferredImageSlot : PBUIImageSlot {
    NSHashTable *_imageSlotObservers;
}


@property (retain, nonatomic) UIColor *fallbackColor; // ivar: _fallbackColor


-(id)_deferredImageSlot;
-(id)initWithLifetimeToken:(id)arg0 ;
-(void)addImageSlotObserver:(id)arg0 ;
-(void)removeImageSlotObserver:(id)arg0 ;
-(void)updateWithImage:(id)arg0 ;


@end


#endif