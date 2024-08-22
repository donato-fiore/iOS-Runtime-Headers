// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWDEFERREDIMAGESLOT_H
#define SBWDEFERREDIMAGESLOT_H

@class NSHashTable, UIColor;


#import "SBWImageSlot.h"

@interface SBWDeferredImageSlot : SBWImageSlot {
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