// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLESTROKEPRESETDATA_H
#define TSTTABLESTROKEPRESETDATA_H


#import <Foundation/Foundation.h>

#import "TSDStroke.h"

@interface TSTTableStrokePresetData : NSObject

@property (retain, nonatomic) TSDStroke *exteriorStroke; // ivar: mExteriorStroke
@property (retain, nonatomic) TSDStroke *horizontalStroke; // ivar: mHorizontalStroke
@property (nonatomic) unsigned int mask; // ivar: mVisibleMask
@property (retain, nonatomic) TSDStroke *verticalStroke; // ivar: mVerticalStroke


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithMask:(unsigned int)arg0 horizontalStroke:(id)arg1 verticalStroke:(id)arg2 exteriorStroke:(id)arg3 ;
-(void)dealloc;


@end


#endif