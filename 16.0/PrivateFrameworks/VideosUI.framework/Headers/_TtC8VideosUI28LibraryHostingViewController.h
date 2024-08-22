// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI28LIBRARYHOSTINGVIEWCONTROLLER_H
#define _TTC8VIDEOSUI28LIBRARYHOSTINGVIEWCONTROLLER_H

@class TtC8VideosUI17VUIViewController, UINavigationItem;



@interface _TtC8VideosUI28LibraryHostingViewController : TtC8VideosUI17VUIViewController {
    ? childController;
}


@property (nonatomic, readonly) UINavigationItem *navigationItem;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)vui_viewDidLoad;
-(void)vui_viewWillAppear:(BOOL)arg0 ;
-(void)vui_viewWillLayoutSubviews;


@end


#endif