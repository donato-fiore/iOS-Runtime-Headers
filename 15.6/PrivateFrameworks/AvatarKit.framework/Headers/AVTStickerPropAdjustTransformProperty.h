// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERPROPADJUSTTRANSFORMPROPERTY_H
#define AVTSTICKERPROPADJUSTTRANSFORMPROPERTY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVTStickerPropAdjustTransformProperty : NSObject {
    ? _position;
    ? _rotation;
    ? _scale;
}


@property ? position;
@property (readonly, nonatomic) NSInteger presetCategory; // ivar: _presetCategory
@property (readonly, nonatomic) NSString *presetValue; // ivar: _presetValue
@property ? rotation;
@property ? scale;


-(void)applyAdjustmentIfNeededToNode:(id)arg0 forMemoji:(id)arg1 ignoreScaleZ:(BOOL)arg2 ;


@end


#endif