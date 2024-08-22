// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI16SEARCHCONTROLLER_H
#define _TTC8VIDEOSUI16SEARCHCONTROLLER_H

@class UISearchController, UISearchBar;



@interface _TtC8VideosUI16SearchController : UISearchController {
    ? customSearchBar;
}


@property (nonatomic, readonly) UISearchBar *searchBar;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSearchResultsController:(id)arg0 ;


@end


#endif