// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLEARCHIVEDCONTROLCELLSELECTION_H
#define TSTTABLEARCHIVEDCONTROLCELLSELECTION_H

@class TSPObject, NSString, TSKSelection;
@protocol TSKArchivedSelection;



@interface TSTTableArchivedControlCellSelection : TSPObject <TSKArchivedSelection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSKSelection *selection; // ivar: mControlCellSelection
@property (readonly) Class superclass;


-(void)dealloc;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif