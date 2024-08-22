// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSEARCHBARVIEW_H
#define GKSEARCHBARVIEW_H

@class UICollectionReusableView, NSString, NSArray, NSNumber;
@protocol UISearchBarDelegate;


#import "GKSearchBar.h"

@interface GKSearchBarView : UICollectionReusableView <UISearchBarDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UISearchBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat leadingMargin; // ivar: _leadingMargin
@property (retain, nonatomic) GKSearchBar *searchBar; // ivar: _searchBar
@property (retain, nonatomic) NSArray *searchBarConstraints; // ivar: _searchBarConstraints
@property (readonly) Class superclass;
@property (nonatomic) CGFloat trailingMargin; // ivar: _trailingMargin
@property (retain, nonatomic) NSNumber *usePadConstraints; // ivar: _usePadConstraints


+(BOOL)requiresConstraintBasedLayout;
+(CGFloat)defaultHeight;
+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)establishSearchBarConstraints;
-(void)prepareForReuse;
-(void)updateConstraints;


@end


#endif