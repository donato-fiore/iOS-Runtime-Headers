// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEARCHIVEDCONTROLCELLSELECTION_H
#define TSTTABLEARCHIVEDCONTROLCELLSELECTION_H

@class TSPObject, NSString, TSKSelection;
@protocol TSKArchivedSelection;


#import "TSTTableControlCellSelection.h"

@interface TSTTableArchivedControlCellSelection : TSPObject <TSKArchivedSelection>



@property (retain, nonatomic) TSTTableControlCellSelection *controlCellSelection; // ivar: _controlCellSelection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) Class superclass;


-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif