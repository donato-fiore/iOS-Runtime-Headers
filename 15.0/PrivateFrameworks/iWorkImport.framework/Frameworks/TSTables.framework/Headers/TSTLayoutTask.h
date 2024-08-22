// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTLAYOUTTASK_H
#define TSTLAYOUTTASK_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTLayoutEngine.h"

@interface TSTLayoutTask : NSObject <NSCopying>



@property (readonly, nonatomic) NSMutableArray *cellStatesToLayout; // ivar: _cellStatesToLayout
@property (readonly, weak, nonatomic) TSTLayoutEngine *layoutEngine; // ivar: _layoutEngine
@property (readonly, nonatomic) NSUInteger numberOfCellStates;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLayoutEngine:(id)arg0 ;
-(id)initWithLayoutTask:(id)arg0 ;
-(void)addCellState:(id)arg0 ;
-(void)clear;
-(void)enumerateCellStatesUsingBlock:(id)arg0 ;
-(void)writeToLayoutEngineCaches:(id)arg0 ;


@end


#endif