// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCDEARCHIVEDSELECTION_H
#define TSCHCDEARCHIVEDSELECTION_H

@class TSPObject, NSString, TSKSelection;
@protocol TSKArchivedSelection;



@interface TSCHCDEArchivedSelection : TSPObject <TSKArchivedSelection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSKSelection *selection; // ivar: _selection
@property (readonly) Class superclass;


-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif