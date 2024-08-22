// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPORTRAITVIDEOADJUSTMENTCONTROLLER_H
#define PIPORTRAITVIDEOADJUSTMENTCONTROLLER_H

@class NSNumber, NSDictionary, NSArray;


#import "PIAdjustmentController.h"

@interface PIPortraitVideoAdjustmentController : PIAdjustmentController

@property (retain, nonatomic) NSNumber *aperture;
@property (retain, nonatomic) NSDictionary *cinematographyState;
@property (nonatomic) NSInteger debugMode;
@property (copy, nonatomic) NSArray *disparityKeyframes;
@property (nonatomic) NSUInteger renderingVersionAtCapture;


-(id)_keyframesForKey:(id)arg0 class:(Class)arg1 ;
-(id)pasteKeysForMediaType:(NSInteger)arg0 ;
-(id)visualInputKeys;
-(void)_setKeyframes:(id)arg0 forKey:(id)arg1 ;
-(void)trimToTimeRange:(struct ? )arg0 usingScript:(id)arg1 ;


@end


#endif