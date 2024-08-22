// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCUITABLEVIEWCONTROLLER_H
#define MCUITABLEVIEWCONTROLLER_H

@class UITableViewController, NSString;
@protocol PSStateRestoration;



@interface MCUITableViewController : UITableViewController <PSStateRestoration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)reloadTableOnContentSizeCategoryChange;
-(void)updateExtendedLayoutIncludesOpaqueBars;


@end


#endif