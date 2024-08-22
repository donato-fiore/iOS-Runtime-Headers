// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXJSONDATATABLEROWSELECTOR_H
#define SXJSONDATATABLEROWSELECTOR_H

@class NSString;
@protocol SXDataTableRowSelector;


#import "SXJSONDataTableSelector.h"

@interface SXJSONDataTableRowSelector : SXJSONDataTableSelector <SXDataTableRowSelector>



@property (readonly, nonatomic) NSUInteger columnIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptor;
@property (readonly, nonatomic) NSUInteger even;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger odd;
@property (readonly, nonatomic) NSUInteger rowIndex;
@property (readonly) Class superclass;


-(NSUInteger)evenWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)oddWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)weightForSelectorKey:(id)arg0 ;


@end


#endif