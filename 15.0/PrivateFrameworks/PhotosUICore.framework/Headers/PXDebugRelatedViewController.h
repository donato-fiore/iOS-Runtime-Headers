// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDEBUGRELATEDVIEWCONTROLLER_H
#define PXDEBUGRELATEDVIEWCONTROLLER_H

@class UIViewController, UISegmentedControl, UITableView, NSString, NSDictionary, NSMutableDictionary, NSCountedSet;
@protocol UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate;



@interface PXDebugRelatedViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate>

 {
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    CGFloat _curationScore;
    CGFloat _graphScore;
    CGFloat _neighborScore;
    CGFloat _relatedScore;
    CGFloat _matchingScore;
    BOOL _isInteresting;
    NSUInteger _relatedType;
    NSString *_debugDescription;
    NSDictionary *_matchingWeight;
    NSDictionary *_matchingKeywords;
    NSDictionary *_referenceKeywords;
    NSDictionary *_relatedKeywords;
    NSMutableDictionary *_currentKeywords;
    NSCountedSet *_countedKeywords;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_closeAction:(id)arg0 ;
-(void)_initDataSourceWithKeywords:(id)arg0 ;
-(void)_sendByEmailAction:(id)arg0 ;
-(void)_setupWithDictionary:(id)arg0 ;
-(void)_switchLogsAction:(id)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif