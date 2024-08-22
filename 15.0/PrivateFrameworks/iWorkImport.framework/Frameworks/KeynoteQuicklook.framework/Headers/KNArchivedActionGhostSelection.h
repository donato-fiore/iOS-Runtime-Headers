// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNARCHIVEDACTIONGHOSTSELECTION_H
#define KNARCHIVEDACTIONGHOSTSELECTION_H

@class TSPObject, NSString, TSKSelection;
@protocol TSKArchivedSelection;



@interface KNArchivedActionGhostSelection : TSPObject <TSKArchivedSelection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSKSelection *selection; // ivar: _selection
@property (readonly) Class superclass;


-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 intoMessage:(*void)arg1 ;


@end


#endif