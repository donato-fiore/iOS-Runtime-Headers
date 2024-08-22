// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19APPSTOREKITINTERNAL23URLACTIVITYITEMPROVIDER_H
#define _TTC19APPSTOREKITINTERNAL23URLACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider;



@interface _TtC19AppStoreKitInternal23URLActivityItemProvider : UIActivityItemProvider {
    ? artworkLoader;
    ? shareSheetData;
    ? excludedActivityTypes;
}


@property (nonatomic, readonly) id *item;


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)initWithPlaceholderItem:(id)arg0 ;


@end


#endif