// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPORTRAITADJUSTMENTCONTROLLER_H
#define PIPORTRAITADJUSTMENTCONTROLLER_H

@class NSString, NSDictionary, NSNumber;


#import "PIAdjustmentController.h"

@interface PIPortraitAdjustmentController : PIAdjustmentController

@property (readonly, nonatomic) CGFloat defaultStrength;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSDictionary *portraitInfo;
@property (copy, nonatomic) NSNumber *spillMatteAllowed;
@property (nonatomic) CGFloat strength;
@property (nonatomic) NSInteger version; // ivar: _version


-(BOOL)canRenderPortraitEffect;
-(BOOL)isSettingEqual:(id)arg0 forKey:(id)arg1 ;
-(id)initWithAdjustment:(id)arg0 ;
-(id)pasteKeysForMediaType:(NSInteger)arg0 ;


@end


#endif