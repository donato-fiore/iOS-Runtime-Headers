// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEASUREFOUNDATION9WORLDLINE_H
#define _TTC17MEASUREFOUNDATION9WORLDLINE_H

@class TtC17MeasureFoundation13MeasureObject, NSArray;



@interface _TtC17MeasureFoundation9WorldLine : TtC17MeasureFoundation13MeasureObject {
    ? lineType;
    ? ends;
    ? center;
    ? snappedPoints;
    ? isOnVerticalGuide;
    ? identifiersOfObjectsComposedInto;
    ? isALineMeasurement;
    ? meanFPSDuringPlacement;
}


@property (nonatomic, copy) NSArray *identifiersOfObjectsComposedInto;


-(id)init;


@end


#endif