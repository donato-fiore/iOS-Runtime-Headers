// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSNEWSVIEWCONTROLLER_H
#define NSSNEWSVIEWCONTROLLER_H

@class UIViewController, NSArray, _UIResilientRemoteViewContainerViewController;



@interface NSSNewsViewController : UIViewController

@property (copy, nonatomic) NSArray *articleIDs; // ivar: _articleIDs
@property (nonatomic, getter=isLinkPreviewing) BOOL linkPreviewing; // ivar: _linkPreviewing
@property (retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteViewContainerViewController; // ivar: _remoteViewContainerViewController


+(BOOL)canOpenURL:(id)arg0 ;
-(id)initWithArticleID:(id)arg0 ;
-(id)initWithArticleIDs:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)dealloc;
-(void)requestRemoteViewController;
-(void)setupRemoteViewController:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif