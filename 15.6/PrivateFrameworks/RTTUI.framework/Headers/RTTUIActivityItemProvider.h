// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTTUIACTIVITYITEMPROVIDER_H
#define RTTUIACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider, NSAttributedString;



@interface RTTUIActivityItemProvider : UIActivityItemProvider

@property (retain, nonatomic) NSAttributedString *transcript; // ivar: _transcript


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;


@end


#endif