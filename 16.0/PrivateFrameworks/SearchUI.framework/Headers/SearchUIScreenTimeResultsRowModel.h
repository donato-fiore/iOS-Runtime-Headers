// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUISCREENTIMERESULTSROWMODEL_H
#define SEARCHUISCREENTIMERESULTSROWMODEL_H

@class SFSearchResult, NSString;


#import "SearchUIRowModel.h"

@interface SearchUIScreenTimeResultsRowModel : SearchUIRowModel

@property (retain, nonatomic) SFSearchResult *overrideIdentifyingResult; // ivar: _overrideIdentifyingResult
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isTappable;
-(Class)cellViewClass;
-(Class)collectionViewCellClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifyingResult;
-(id)initWithSection:(id)arg0 result:(id)arg1 ;


@end


#endif