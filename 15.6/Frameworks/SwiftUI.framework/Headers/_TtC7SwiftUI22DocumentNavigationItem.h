// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7SWIFTUI22DOCUMENTNAVIGATIONITEM_H
#define _TTC7SWIFTUI22DOCUMENTNAVIGATIONITEM_H

@class UINavigationItem, NSArray;



@interface _TtC7SwiftUI22DocumentNavigationItem : UINavigationItem {
    ? onDismiss;
    ? documentBrowserButton;
}


@property (nonatomic, copy) NSArray *leftBarButtonItems;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;
-(void)dismiss:(id)arg0 ;


@end


#endif