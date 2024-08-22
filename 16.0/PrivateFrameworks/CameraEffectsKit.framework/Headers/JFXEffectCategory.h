// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXEFFECTCATEGORY_H
#define JFXEFFECTCATEGORY_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface JFXEffectCategory : NSObject

@property (retain, nonatomic) NSString *categoryID; // ivar: _categoryID
@property (readonly, nonatomic) BOOL containsNewEffects; // ivar: _containsNewEffects
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSArray *effectIDs; // ivar: _effectIDs
@property (nonatomic) int effectType; // ivar: _effectType
@property (readonly, nonatomic) BOOL isNewCategory; // ivar: _isNewCategory


-(id)initWithCategoryID:(id)arg0 forEffectType:(int)arg1 displayName:(id)arg2 effectIDs:(id)arg3 isNewCategory:(BOOL)arg4 containsNewEffects:(BOOL)arg5 ;


@end


#endif