// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPTABLEVIEWCONTROLLER_H
#define PKPAYMENTSETUPTABLEVIEWCONTROLLER_H

@class UIViewController, UITableViewController, UIView, NSString, NSAttributedString, NSIndexPath, UITableView;
@protocol _PKUIKVisibilityBackdropViewDelegate, PKPaymentSetupPresentationProtocol, UITableViewDataSource, UITableViewDelegate;


#import "PKPaymentSetupDockView.h"
#import "_PKUIKVisibilityBackdropView.h"
#import "PKHyperlinkTextView.h"

@interface PKPaymentSetupTableViewController : UIViewController <_PKUIKVisibilityBackdropViewDelegate, PKPaymentSetupPresentationProtocol, UITableViewDataSource, UITableViewDelegate>

 {
    UITableViewController *_tableViewController;
    UIView *_containerView;
    NSInteger _style;
    PKPaymentSetupDockView *_dockView;
    _PKUIKVisibilityBackdropView *_backdropView;
    CGFloat _backdropWeight;
}


@property (nonatomic) BOOL clearsSelectionOnViewWillAppear; // ivar: _clearsSelectionOnViewWillAppear
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPaymentSetupDockView *dockView;
@property (copy, nonatomic) NSAttributedString *footerAttributedText;
@property (retain, nonatomic) PKHyperlinkTextView *footerTextView; // ivar: _footerTextView
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)extendedLayoutIncludesOpaqueBars;
-(BOOL)paymentSetupMarkerRemovalIsInclusive;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)visibilityBackdropView:(id)arg0 preferredStyleForTraitCollection:(id)arg1 ;
-(NSUInteger)edgesForExtendedLayout;
-(NSUInteger)paymentSetupMarker;
-(id)addFooterStyleAttributes:(id)arg0 ;
-(id)initWithContext:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 context:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableViewDidFinishReload:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif