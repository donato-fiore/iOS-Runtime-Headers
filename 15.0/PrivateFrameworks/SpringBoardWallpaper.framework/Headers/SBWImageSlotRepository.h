// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWIMAGESLOTREPOSITORY_H
#define SBWIMAGESLOTREPOSITORY_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBWImageSlotRepository : NSObject {
    NSMutableSet *_lifetimes;
    NSMutableDictionary *_slots;
}




-(BOOL)hasSlotForIdentifier:(id)arg0 ;
-(NSInteger)actualStyleForIdentifier:(id)arg0 ;
-(id)initWithWindowScene:(id)arg0 ;
-(id)ioSurfaceForIdentifier:(id)arg0 ;
-(id)urlForIdentifier:(id)arg0 ;
-(struct CGSize )sizeForIdentifier:(id)arg0 ;
-(void)allocateImageSlotForIdentifier:(id)arg0 size:(struct CGSize )arg1 actualStyle:(NSInteger)arg2 url:(id)arg3 lifetimeObject:(id)arg4 ;
-(void)freeImageSlotWithIdentifier:(id)arg0 lifetime:(id)arg1 ;
-(void)setImageSlot:(id)arg0 forIdentifier:(id)arg1 ;


@end


#endif