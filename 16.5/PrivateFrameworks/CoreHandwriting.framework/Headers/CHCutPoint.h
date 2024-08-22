// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHCUTPOINT_H
#define CHCUTPOINT_H


#import <Foundation/Foundation.h>


@interface CHCutPoint : NSObject

@property (readonly, nonatomic) BOOL isEndOfStroke; // ivar: _isEndOfStroke
@property (readonly, nonatomic) NSInteger pointIndex; // ivar: _pointIndex
@property (readonly, nonatomic) NSInteger strokeIndex; // ivar: _strokeIndex


+(id)sortedCHCutPointArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isStartOfStroke;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithStrokeIndex:(NSInteger)arg0 pointIndex:(NSInteger)arg1 isEndOfStroke:(BOOL)arg2 ;


@end


#endif