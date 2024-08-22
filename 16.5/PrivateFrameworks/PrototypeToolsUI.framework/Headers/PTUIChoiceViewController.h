// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTUICHOICEVIEWCONTROLLER_H
#define PTUICHOICEVIEWCONTROLLER_H

@class UITableViewController, NSIndexPath, NSString, PTChoiceRow;
@protocol PTRowObserver;



@interface PTUIChoiceViewController : UITableViewController <PTRowObserver>

 {
    NSIndexPath *_valueIndexPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PTChoiceRow *row; // ivar: _row
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPresentingRow:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_checkAppropriateCell;
-(void)dealloc;
-(void)rowDidChangeValue:(id)arg0 ;
-(void)rowDidReload:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif