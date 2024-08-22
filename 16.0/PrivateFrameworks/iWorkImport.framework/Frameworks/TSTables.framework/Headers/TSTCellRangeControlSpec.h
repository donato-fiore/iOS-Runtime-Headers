// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCELLRANGECONTROLSPEC_H
#define TSTCELLRANGECONTROLSPEC_H



#import "TSTCellSpec.h"

@interface TSTCellRangeControlSpec : TSTCellSpec {
    unsigned int _interactionType;
}


@property (readonly, nonatomic) CGFloat increment; // ivar: _increment
@property (readonly, nonatomic) unsigned int legacyDisplayFormatType; // ivar: _legacyDisplayFormatType
@property (readonly, nonatomic) CGFloat maximum; // ivar: _maximum
@property (readonly, nonatomic) CGFloat minimum; // ivar: _minimum


+(BOOL)legalRangeControlMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 increment:(CGFloat)arg2 ;
+(CGFloat)defaultCellValueForInteractionType:(unsigned int)arg0 ;
+(id)cellSpecFromTSKFormat:(id)arg0 ;
+(id)defaultRangeControlSpecOfType:(unsigned int)arg0 ;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)sliderSpecWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 increment:(CGFloat)arg2 ;
+(id)stepperSpecWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 increment:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateFormatAndValue:(id)arg0 ;
-(CGFloat)recomputedValueFromValue:(CGFloat)arg0 changed:(*BOOL)arg1 ;
-(CGFloat)valueFromString:(id)arg0 locale:(id)arg1 ;
-(NSUInteger)hash;
-(id)asRangeControlSpec;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithInteractionType:(unsigned int)arg0 minimum:(CGFloat)arg1 maximum:(CGFloat)arg2 increment:(CGFloat)arg3 ;
-(id)tskStepperSliderFormatWithDisplayFormatType:(unsigned int)arg0 ;
-(unsigned int)interactionType;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif