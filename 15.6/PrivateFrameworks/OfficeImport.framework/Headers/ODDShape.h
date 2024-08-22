// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODDSHAPE_H
#define ODDSHAPE_H

@class NSMutableArray;


#import "ODDLayoutObject.h"

@interface ODDShape : ODDLayoutObject {
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}




-(id)adjustments;
-(id)description;
-(id)init;
-(int)presetType;
-(int)type;
-(void)addAdjustment:(id)arg0 ;
-(void)setPresetType:(int)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif