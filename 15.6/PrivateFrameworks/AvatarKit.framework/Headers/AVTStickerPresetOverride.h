// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERPRESETOVERRIDE_H
#define AVTSTICKERPRESETOVERRIDE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AVTStickerPresetOverride : NSObject

@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, copy, nonatomic) NSString *presetIdentifier; // ivar: _presetIdentifier
@property (readonly, nonatomic) NSArray *unlessIdentifiers; // ivar: _unlessIdentifiers


+(id)presetOverrideFromDictionary:(id)arg0 forCategoryName:(id)arg1 ;
-(id)initWithCategory:(NSInteger)arg0 presetIdentifier:(id)arg1 unless:(id)arg2 ;
-(void)applyToAvatar:(id)arg0 reversionContext:(id)arg1 ;


@end


#endif