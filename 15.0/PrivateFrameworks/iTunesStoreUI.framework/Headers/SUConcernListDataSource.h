// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCONCERNLISTDATASOURCE_H
#define SUCONCERNLISTDATASOURCE_H

@class NSArray;


#import "SUTableDataSource.h"
#import "SUTextViewCell.h"

@interface SUConcernListDataSource : SUTableDataSource

@property (retain, nonatomic) NSArray *concerns; // ivar: _concerns
@property (nonatomic) NSInteger selectedConcernIndex; // ivar: _selectedConcernIndex
@property (readonly, nonatomic) SUTextViewCell *textViewCell; // ivar: _textViewCell


-(CGFloat)cellHeightForIndexPath:(id)arg0 ;
-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)tableViewStyle;
-(id)_titleCellForIndexPath:(id)arg0 ;
-(id)cellForIndexPath:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif