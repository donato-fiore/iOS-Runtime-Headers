// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLESORTTAG_H
#define TSTTABLESORTTAG_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSTTableSortTag : NSObject

@property (nonatomic) unsigned int columnOrRowIndex; // ivar: _columnOrRowIndex
@property (retain, nonatomic) NSMutableArray *reorganizeValues; // ivar: _reorganizeValues


-(id)initWithNumberOfSortRules:(NSUInteger)arg0 ;
-(id)reorganizeValueAtIndex:(NSUInteger)arg0 ;
-(void)setReorganizeValue:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif