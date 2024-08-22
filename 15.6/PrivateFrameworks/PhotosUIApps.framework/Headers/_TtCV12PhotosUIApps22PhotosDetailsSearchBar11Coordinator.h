// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCV12PHOTOSUIAPPS22PHOTOSDETAILSSEARCHBAR11COORDINATOR_H
#define _TTCV12PHOTOSUIAPPS22PHOTOSDETAILSSEARCHBAR11COORDINATOR_H

@protocol UISearchBarDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV12PhotosUIApps22PhotosDetailsSearchBar11Coordinator : NSObject <UISearchBarDelegate>

 {
    ? _text;
    ? placeholderText;
}




-(id)init;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;


@end


#endif