// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIMULTIRESULTROWMODEL_H
#define SEARCHUIMULTIRESULTROWMODEL_H

@class NSArray;


#import "SearchUIRowModel.h"

@interface SearchUIMultiResultRowModel : SearchUIRowModel

@property (retain) NSArray *multiResults; // ivar: _multiResults


-(BOOL)isDraggable;
-(BOOL)isFocusable;
-(BOOL)isTappable;
-(Class)cellViewClass;
-(Class)collectionViewCellClass;
-(NSInteger)removeResult:(id)arg0 ;
-(id)accessibilityIdentifier;
-(id)dragAppBundleID;
-(id)initWithResults:(id)arg0 ;
-(id)results;
-(int)separatorStyle;


@end


#endif