// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATAREDITORCOLORSSTATE_H
#define AVTAVATAREDITORCOLORSSTATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "AVTAvatarColorVariationStore.h"

@interface AVTAvatarEditorColorsState : NSObject

@property (retain, nonatomic) NSMutableDictionary *colorStorage; // ivar: _colorStorage
@property (readonly, nonatomic) AVTAvatarColorVariationStore *variationStore; // ivar: _variationStore


-(id)initWithVariationStore:(id)arg0 ;
-(id)selectedColorForCategory:(NSInteger)arg0 destinationIndex:(NSInteger)arg1 ;
-(id)selectedColorPresetForCategory:(NSInteger)arg0 destinationIndex:(NSInteger)arg1 ;
-(id)storageForCategory:(NSInteger)arg0 ;
-(void)setSelectedColorPreset:(id)arg0 forCoreModelColor:(id)arg1 ;


@end


#endif