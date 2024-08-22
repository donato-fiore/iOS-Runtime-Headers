// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCOREMODEL_H
#define AVTCOREMODEL_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVTAvatarEditorColorDefaultsProvider.h"
#import "AVTEditingModelColors.h"

@interface AVTCoreModel : NSObject

@property (readonly, copy, nonatomic) AVTAvatarEditorColorDefaultsProvider *colorDefaultsProvider; // ivar: _colorDefaultsProvider
@property (readonly, copy, nonatomic) AVTEditingModelColors *colors; // ivar: _colors
@property (readonly, copy, nonatomic) NSArray *groups; // ivar: _groups
@property (readonly, nonatomic) NSUInteger platform; // ivar: _platform


-(id)description;
-(id)initWithGroups:(id)arg0 colors:(id)arg1 colorDefaultsProvider:(id)arg2 forPlatform:(NSUInteger)arg3 ;


@end


#endif