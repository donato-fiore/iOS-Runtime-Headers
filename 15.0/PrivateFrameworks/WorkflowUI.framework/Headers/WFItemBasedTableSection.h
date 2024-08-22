// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFITEMBASEDTABLESECTION_H
#define WFITEMBASEDTABLESECTION_H

@class NSArray;


#import "WFTableSection.h"

@interface WFItemBasedTableSection : WFTableSection

@property (retain, nonatomic) NSArray *items;


-(void)addItem:(id)arg0 ;
-(void)insertItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeItem:(id)arg0 ;
-(void)removeItemAtIndex:(NSUInteger)arg0 ;


@end


#endif