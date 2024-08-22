// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLESTROKEPRESETDATA_H
#define TSTTABLESTROKEPRESETDATA_H

@class TSDStroke;

#import <Foundation/Foundation.h>


@interface TSTTableStrokePresetData : NSObject

@property (retain, nonatomic) TSDStroke *exteriorStroke; // ivar: mExteriorStroke
@property (retain, nonatomic) TSDStroke *horizontalStroke; // ivar: mHorizontalStroke
@property (nonatomic) unsigned int mask; // ivar: mVisibleMask
@property (retain, nonatomic) TSDStroke *verticalStroke; // ivar: mVerticalStroke


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithDeprecatedArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithMask:(unsigned int)arg0 horizontalStroke:(id)arg1 verticalStroke:(id)arg2 exteriorStroke:(id)arg3 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif