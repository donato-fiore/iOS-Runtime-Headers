// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACTIVITYITEMSCONFIGURATIONACTIVITYITEMPROVIDER_H
#define _UIACTIVITYITEMSCONFIGURATIONACTIVITYITEMPROVIDER_H

@class LPLinkMetadata;
@protocol UIActivityItemsConfigurationReading;


#import "UIActivityItemProvider.h"

@interface _UIActivityItemsConfigurationActivityItemProvider : UIActivityItemProvider {
    id<UIActivityItemsConfigurationReading> *_activityItemsConfiguration;
    id *_item;
    LPLinkMetadata *_linkMetadata;
    NSInteger _sourceIndex;
}




-(id)_title;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)initWithActivityItemsConfiguration:(id)arg0 itemAtSourceIndex:(NSInteger)arg1 ;
-(id)item;


@end


#endif