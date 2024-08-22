// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSIMPLETABLEDATASOURCE_H
#define SUSIMPLETABLEDATASOURCE_H

@class NSArray;


#import "SUTableDataSource.h"

@interface SUSimpleTableDataSource : SUTableDataSource

@property (retain, nonatomic) Class cellConfigurationClass; // ivar: _cellConfigurationClass
@property (retain, nonatomic) NSArray *objects; // ivar: _objects


-(CGFloat)cellHeightForIndexPath:(id)arg0 ;
-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)cellForIndexPath:(id)arg0 ;
-(id)objectForIndexPath:(id)arg0 ;
-(void)configureCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)reloadCellContexts;


@end


#endif