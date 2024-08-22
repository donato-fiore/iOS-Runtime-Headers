// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTGRIDADAPTER_H
#define TSCHCHARTGRIDADAPTER_H

@class NSString;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "TSCHChartGrid.h"

@interface TSCHChartGridAdapter : NSObject <NSFastEnumeration>

 {
    NSUInteger _index;
}


@property (readonly, nonatomic) TSCHChartGrid *grid; // ivar: _grid
@property (retain, nonatomic) NSString *name;


-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithChartGrid:(id)arg0 index:(NSUInteger)arg1 ;
-(id)valueAtIndex:(NSUInteger)arg0 ;
-(void)setValue:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif