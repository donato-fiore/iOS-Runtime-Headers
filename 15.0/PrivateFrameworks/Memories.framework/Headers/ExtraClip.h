// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EXTRACLIP_H
#define EXTRACLIP_H

@class NSMutableDictionary, NSString;


#import "KonaClip.h"

@interface ExtraClip : KonaClip

@property (nonatomic) CGFloat endRatio;
@property (readonly, retain, nonatomic) NSMutableDictionary *extraDefinition;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) CGFloat startRatio;
@property (retain, nonatomic) NSString *text;


-(BOOL)hasVisualCharacteristic;
-(int)clipType;
-(int)maxDuration;


@end


#endif