// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKLINESTYLESVIEWCONTROLLER_H
#define AKLINESTYLESVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "AKController.h"

@interface AKLineStylesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (weak, nonatomic) AKController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *lineWidthTags; // ivar: _lineWidthTags
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


+(id)generateLineImageForTag:(NSInteger)arg0 selected:(BOOL)arg1 ;
-(NSInteger)currentLineWidthTag;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)indexPathForLineWidthTag:(NSInteger)arg0 ;
-(id)initWithController:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)selectRowForTag:(NSInteger)arg0 ;
-(void)selectedLineWidthChanged:(NSInteger)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif