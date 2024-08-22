// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODDDATAPOINT_H
#define ODDDATAPOINT_H

@class NSMutableArray;


#import "ODDPoint.h"

@interface ODDDataPoint : ODDPoint {
    NSMutableArray *mPresentations;
}




-(id)presentations;
-(void)addAssociatedPresentation:(id)arg0 ;
-(void)addPresentation:(id)arg0 order:(NSUInteger)arg1 ;


@end


#endif