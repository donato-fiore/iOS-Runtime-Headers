// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIDESIGNLIBRARYCATALOG_H
#define CUIDESIGNLIBRARYCATALOG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CUIDesignLibraryCatalog : NSObject {
    NSUInteger _storageRef;
    NSString *_assetStoreName;
    id _colorCache;
    os_unfair_lock_s _lock;
}


@property NSInteger colorScheme; // ivar: _colorScheme
@property NSInteger contrast; // ivar: _contrast
@property NSInteger designSystem; // ivar: _designSystem
@property NSInteger styling; // ivar: _styling


+(id)_bundleNameForResolvedDesignSystem:(NSInteger)arg0 ;
+(id)_catalogPathComponentForDesignSystem:(NSInteger)arg0 colorScheme:(NSInteger)arg1 contrast:(NSInteger)arg2 styling:(NSInteger)arg3 error:(*id)arg4 ;
+(id)catalogForDesignSystem:(NSInteger)arg0 colorScheme:(NSInteger)arg1 contrast:(NSInteger)arg2 styling:(NSInteger)arg3 error:(*id)arg4 ;
-(id)_colorNameStringFromNameEnum:(NSInteger)arg0 palette:(NSInteger)arg1 ;
-(id)colorWithName:(NSInteger)arg0 palette:(NSInteger)arg1 displayGamut:(NSInteger)arg2 error:(*id)arg3 ;
-(id)description;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)shapeEffectPresetWithName:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif