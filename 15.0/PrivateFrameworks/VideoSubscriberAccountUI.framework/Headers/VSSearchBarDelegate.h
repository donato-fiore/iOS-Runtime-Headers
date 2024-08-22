// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSEARCHBARDELEGATE_H
#define VSSEARCHBARDELEGATE_H

@class NSString, UISearchBar;
@protocol UISearchBarDelegate;

#import <Foundation/Foundation.h>


@interface VSSearchBarDelegate : NSObject <UISearchBarDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)init;
-(void)clearText;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;


@end


#endif