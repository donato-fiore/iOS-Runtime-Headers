// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARCOLORVARIATIONSTORE_H
#define AVTAVATARCOLORVARIATIONSTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AVTAvatarColorVariationStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *colorPresets; // ivar: _colorPresets


-(id)colorPresetFromColor:(id)arg0 ;
-(id)colorVariationFromColor:(id)arg0 ;
-(id)init;
-(id)keyForColor:(id)arg0 ;
-(void)resetValues;
-(void)saveColorPreset:(id)arg0 forColor:(id)arg1 ;


@end


#endif