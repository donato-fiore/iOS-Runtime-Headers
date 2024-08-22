// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDISCOVERYSHELFVIEW_H
#define PKDISCOVERYSHELFVIEW_H

@class UIView, NSString;



@interface PKDiscoveryShelfView : UIView

@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier


+(id)viewForShelf:(id)arg0 discoveryCardViewDelegate:(id)arg1 ;
+(id)viewForShelf:(id)arg0 discoveryCardViewDelegate:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif