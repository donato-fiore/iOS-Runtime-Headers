// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTARCHIVEDTABLENAMESELECTION_H
#define TSTARCHIVEDTABLENAMESELECTION_H

@class TSPObject, NSString, TSKSelection;
@protocol TSKArchivedSelection;


#import "TSTTableNameSelection.h"

@interface TSTArchivedTableNameSelection : TSPObject <TSKArchivedSelection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) Class superclass;
@property (retain, nonatomic) TSTTableNameSelection *tableNameSelection; // ivar: _tableNameSelection


-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif