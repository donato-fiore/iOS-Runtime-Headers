// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCPROFILETABLEVIEWCONTROLLER_H
#define DMCPROFILETABLEVIEWCONTROLLER_H

@class UITableViewController, NSString;
@protocol PSStateRestoration;



@interface DMCProfileTableViewController : UITableViewController <PSStateRestoration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)hideProgressInNavBarShowBackButton:(BOOL)arg0 ;
-(void)presentViewController:(id)arg0 ;
-(void)reloadTableOnContentSizeCategoryChange;
-(void)showProgressInNavBar;
-(void)updateExtendedLayoutIncludesOpaqueBars;


@end


#endif