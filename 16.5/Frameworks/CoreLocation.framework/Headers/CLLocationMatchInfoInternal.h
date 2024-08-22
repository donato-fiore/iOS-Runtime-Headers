// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLLOCATIONMATCHINFOINTERNAL_H
#define CLLOCATIONMATCHINFOINTERNAL_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CLLocationMatchInfoInternal : NSObject <NSCopying>

 {
    NSInteger fMatchQuality;
    CLLocationCoordinate2D fMatchCoordinate;
    CGFloat fMatchCourse;
    int fMatchFormOfWay;
    int fMatchRoadClass;
    BOOL fMatchShifted;
    NSData *fMatchDataArray;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMatchQuality:(NSInteger)arg0 matchCoordinate:(struct CLLocationCoordinate2D )arg1 matchCourse:(CGFloat)arg2 matchFormOfWay:(int)arg3 matchRoadClass:(int)arg4 matchShifted:(BOOL)arg5 matchDataArray:(id)arg6 ;
-(void)dealloc;


@end


#endif