// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLESTROKEPRESETLIST_H
#define TSTTABLESTROKEPRESETLIST_H

@class NSPointerArray;

#import <Foundation/Foundation.h>


@interface TSTTableStrokePresetList : NSObject {
    NSUInteger mCount;
}


@property (retain, nonatomic) NSPointerArray *presets; // ivar: _presets


+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)strokePresetListForDefaultPropertyMapForTablePresetID:(NSUInteger)arg0 colors:(id)arg1 ;
+(id)strokePresetListForDefaultPropertyMapWithFatStroke:(id)arg0 andThinStroke:(id)arg1 ;
+(id)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(id)arg0 verticalStroke:(id)arg1 exteriorStroke:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(id)exteriorStrokeForStrokePreset:(NSUInteger)arg0 ;
-(id)horizontalStrokeForStrokePreset:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)presetAtIndex:(NSUInteger)arg0 ;
-(id)verticalStrokeForStrokePreset:(NSUInteger)arg0 ;
-(unsigned int)maskForStrokePreset:(NSUInteger)arg0 ;
-(unsigned int)maskForStrokePresets:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setStroke:(id)arg0 forPresetIndex:(NSUInteger)arg1 ;
-(void)setStrokePreset:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif