// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNAL24TEXTACTIVITYITEMPROVIDER_H
#define _TTC19APPSTOREKITINTERNAL24TEXTACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider;



@interface _TtC19AppStoreKitInternal24TextActivityItemProvider : UIActivityItemProvider {
    ? text;
    ? excludedActivityTypes;
}


@property (nonatomic, readonly) id *item;


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)initWithPlaceholderItem:(id)arg0 ;


@end


#endif