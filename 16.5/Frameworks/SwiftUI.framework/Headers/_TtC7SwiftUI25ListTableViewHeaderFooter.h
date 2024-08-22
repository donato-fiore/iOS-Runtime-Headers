// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SWIFTUI25LISTTABLEVIEWHEADERFOOTER_H
#define _TTC7SWIFTUI25LISTTABLEVIEWHEADERFOOTER_H

@class UITableViewHeaderFooterView;



@interface _TtC7SwiftUI25ListTableViewHeaderFooter : UITableViewHeaderFooterView {
    ? viewListID;
    ? configuration;
    ? host;
    ? isDisplaying;
    ? outlineRootSeed;
}


@property (nonatomic) BOOL isAccessibilityElement;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_bridgedUpdateConfigurationUsingState:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif