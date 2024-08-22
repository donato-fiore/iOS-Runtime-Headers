// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREMOTEFILELISTVIEW_H
#define WFREMOTEFILELISTVIEW_H

@class UIView, UILocalizedIndexedCollation, NSDateFormatter, NSString, NSDictionary, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, WFRemoteFileListViewDelegate;



@interface WFRemoteFileListView : UIView <UITableViewDelegate, UITableViewDataSource>



@property (readonly, nonatomic) UILocalizedIndexedCollation *collation; // ivar: _collation
@property (nonatomic) UIEdgeInsets contentInset;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFRemoteFileListViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *filesBySection; // ivar: _filesBySection
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (nonatomic) UIEdgeInsets verticalScrollIndicatorInsets;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)cellAtPoint:(struct CGPoint )arg0 ;
-(id)fileAtPoint:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collation:(id)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(struct CGRect )frameOfCellAtPoint:(struct CGPoint )arg0 ;
-(void)setFiles:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCheckmarkForFile:(id)arg0 ;


@end


#endif