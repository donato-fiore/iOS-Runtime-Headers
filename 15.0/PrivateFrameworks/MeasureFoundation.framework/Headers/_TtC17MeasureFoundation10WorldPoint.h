// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17MEASUREFOUNDATION10WORLDPOINT_H
#define _TTC17MEASUREFOUNDATION10WORLDPOINT_H

@class TtC17MeasureFoundation13MeasureObject, NSArray;



@interface _TtC17MeasureFoundation10WorldPoint : TtC17MeasureFoundation13MeasureObject {
    ? lines;
    ? parentLine;
    ? snapLine;
    ? partOfRectangleId;
    ? delegate;
    ? anchor;
    ? triangulationAnchor;
}


@property (nonatomic, copy) NSArray *lines;
@property (nonatomic) NSInteger state;
@property (nonatomic) NSInteger type; // ivar: type


-(id)init;


@end


#endif