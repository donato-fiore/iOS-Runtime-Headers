// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTMUTABLEEDITINGMODELCOLORS_H
#define AVTMUTABLEEDITINGMODELCOLORS_H

@class NSMutableDictionary;


#import "AVTEditingModelColors.h"

@interface AVTMutableEditingModelColors : AVTEditingModelColors

@property (readonly, nonatomic) NSMutableDictionary *mutableStorage; // ivar: _mutableStorage


-(id)initWithStorage:(id)arg0 variationStore:(id)arg1 ;
-(id)initWithVariationStore:(id)arg0 ;
-(void)setColor:(id)arg0 forSettingKind:(struct ? )arg1 identifier:(id)arg2 ;


@end


#endif