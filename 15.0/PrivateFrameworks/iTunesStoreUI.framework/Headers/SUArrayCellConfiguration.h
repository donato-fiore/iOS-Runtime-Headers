// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUARRAYCELLCONFIGURATION_H
#define SUARRAYCELLCONFIGURATION_H



#import "SUCellConfiguration.h"

@interface SUArrayCellConfiguration : SUCellConfiguration {
    NSUInteger _numberOfStrings;
    *CGRect _stringFrames;
    *id _strings;
    NSUInteger _numberOfImages;
    *CGRect _imageFrames;
    *id _images;
    *id _selectedImages;
}




-(NSUInteger)numberOfImages;
-(NSUInteger)numberOfLabels;
-(id)_accessibilityStringsArrayPointer;
-(id)imageAtIndex:(NSUInteger)arg0 withModifiers:(NSUInteger)arg1 ;
-(id)initWithStringCount:(NSUInteger)arg0 imageCount:(NSUInteger)arg1 ;
-(id)stringForLabelAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForImageAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLabelAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)reloadData;
-(void)reloadImages;
-(void)reloadLayoutInformation;
-(void)reloadStrings;
-(void)setLayoutSize:(struct CGSize )arg0 ;


@end


#endif