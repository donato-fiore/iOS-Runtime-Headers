// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17MEASUREFOUNDATION14WORLDRECTANGLE_H
#define _TTC17MEASUREFOUNDATION14WORLDRECTANGLE_H

@class TtC17MeasureFoundation13MeasureObject;



@interface _TtC17MeasureFoundation14WorldRectangle : TtC17MeasureFoundation13MeasureObject {
    ? edges;
    ? splitters;
    ? data;
    ? rectangleDataBuffer;
    ? expirationTime;
    ? expirationTimer;
    ? expirationAction;
}


@property (nonatomic) NSInteger state;


-(id)init;


@end


#endif