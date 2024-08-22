// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXJSONDATATABLECELLSELECTOR_H
#define SXJSONDATATABLECELLSELECTOR_H

@class NSString;
@protocol SXDataTableCellSelector;


#import "SXJSONDataTableSelector.h"

@interface SXJSONDataTableCellSelector : SXJSONDataTableSelector <SXDataTableCellSelector>



@property (readonly, nonatomic) NSUInteger columnIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptor;
@property (readonly, nonatomic) NSUInteger evenColumns;
@property (readonly, nonatomic) NSUInteger evenRows;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger oddColumns;
@property (readonly, nonatomic) NSUInteger oddRows;
@property (readonly, nonatomic) NSUInteger rowIndex;
@property (readonly) Class superclass;


-(NSUInteger)weightForSelectorKey:(id)arg0 ;


@end


#endif