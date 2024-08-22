// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATAREDITORCOLORDEFAULTSPROVIDER_H
#define AVTAVATAREDITORCOLORDEFAULTSPROVIDER_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVTEditingModelColors.h"

@interface AVTAvatarEditorColorDefaultsProvider : NSObject <NSCopying>



@property (retain, nonatomic) NSDictionary *categoryMapping; // ivar: _categoryMapping
@property (retain, nonatomic) NSDictionary *definitions; // ivar: _definitions
@property (retain, nonatomic) AVTEditingModelColors *editingColors; // ivar: _editingColors


+(NSInteger)categoryForKey:(id)arg0 ;
+(NSInteger)colorIndexForKey:(id)arg0 ;
+(id)keyForCategory:(NSInteger)arg0 colorIndex:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultColorForCategory:(NSInteger)arg0 destination:(NSInteger)arg1 withConfiguration:(id)arg2 ;
-(id)defaultColorPresetForCategory:(NSInteger)arg0 destination:(NSInteger)arg1 withConfiguration:(id)arg2 ;
-(id)initWithColorDefaultsDictionary:(id)arg0 editingColors:(id)arg1 ;


@end


#endif