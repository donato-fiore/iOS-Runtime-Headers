// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTHLSROLLITEM_H
#define MTHLSROLLITEM_H



#import "MTHLSItem.h"

@interface MTHLSRollItem : MTHLSItem

@property (nonatomic) NSUInteger duration; // ivar: _duration


-(BOOL)containsOverallPosition:(NSUInteger)arg0 ;
-(NSUInteger)endOverallPosition;
-(id)initWithStartOverallPosition:(NSUInteger)arg0 duration:(NSUInteger)arg1 metricsData:(id)arg2 ;


@end


#endif