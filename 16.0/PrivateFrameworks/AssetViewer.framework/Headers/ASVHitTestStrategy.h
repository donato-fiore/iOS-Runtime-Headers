// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASVHITTESTSTRATEGY_H
#define ASVHITTESTSTRATEGY_H



#import "ASVHitTestHistory.h"

@interface ASVHitTestStrategy : ASVHitTestHistory



-(id)decisionForHitTestOfType:(NSInteger)arg0 atScreenPoint:(id)arg1 inFrame:(struct CGSize )arg2 withViewportSize:(float)arg3 assetPositionmaxDistance;
-(id)decisionForHitTestOfType:(NSInteger)arg0 atScreenPoint:(id)arg1 inSession:(struct CGSize )arg2 withViewportSize:(float)arg3 assetPositionmaxDistance;


@end


#endif