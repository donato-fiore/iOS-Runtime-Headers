// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7SWIFTUI20LISTHEADERFOOTERVIEW_H
#define _TTC7SWIFTUI20LISTHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView;



@interface _TtC7SwiftUI20ListHeaderFooterView : UITableViewHeaderFooterView {
    ? viewListID;
    ? configuration;
    ? host;
    ? outlineRootSeed;
}


@property (nonatomic) BOOL isAccessibilityElement;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateViewConfigurationsWithState:(NSUInteger)arg0 ;
-(void)prepareForReuse;


@end


#endif