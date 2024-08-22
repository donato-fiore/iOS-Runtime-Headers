// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPORTRAITVIDEODEBUGCONTROLLER_H
#define PUPORTRAITVIDEODEBUGCONTROLLER_H

@class UIViewController, PICompositionController, NSString, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface PUPortraitVideoDebugController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *debugModes; // ivar: _debugModes
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif