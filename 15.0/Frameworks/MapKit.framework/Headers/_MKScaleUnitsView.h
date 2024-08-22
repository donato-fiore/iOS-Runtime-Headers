// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKSCALEUNITSVIEW_H
#define _MKSCALEUNITSVIEW_H

@class UIView, NSDictionary, NSMutableArray, NSMapTable, NSMutableDictionary, NSNumberFormatter, NSString;



@interface _MKScaleUnitsView : UIView {
    BOOL _useLightText;
    CGFloat _segmentLengthInPixels;
    CGFloat _justUnitsWidth;
    NSDictionary *_legendAttributes;
    NSMutableArray *_strings;
    NSMapTable *_legendStringWidthCache;
    NSMutableDictionary *_legendStringForDistanceStringCache;
}


@property (nonatomic, getter=isRTL) BOOL RTL; // ivar: _RTL
@property (retain, nonatomic) NSNumberFormatter *floatNumberFormatter; // ivar: _floatNumberFormatter
@property (retain, nonatomic) NSString *legendBaseString; // ivar: _legendBaseString
@property (nonatomic) CGFloat segmentLengthInPixels;
@property (retain, nonatomic) NSString *unitsString; // ivar: _unitsString
@property (readonly, nonatomic) CGFloat unitsWidth; // ivar: _unitsWidth
@property (copy, nonatomic) NSString *unpaddedUnitsString; // ivar: _unpaddedUnitsString
@property (nonatomic) BOOL useLightText;
@property (readonly, nonatomic) NSString *zeroUnitsString; // ivar: _zeroUnitsString


-(BOOL)canDisplaySegment:(NSUInteger)arg0 ;
-(CGFloat)_widthForString:(id)arg0 attributes:(id)arg1 ;
-(id)_legendStringForDistanceString:(id)arg0 appendUnits:(BOOL)arg1 index:(int)arg2 ;
-(id)_uncachedLegendStringsForDistanceString:(id)arg0 ;
-(id)init;
-(void)_calculateLegend:(BOOL)arg0 ;
-(void)clearCaches:(id)arg0 ;
-(void)setUnits:(id)arg0 ;


@end


#endif