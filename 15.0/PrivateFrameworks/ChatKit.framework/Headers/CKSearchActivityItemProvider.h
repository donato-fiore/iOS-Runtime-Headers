// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSEARCHACTIVITYITEMPROVIDER_H
#define CKSEARCHACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider, LPLinkMetadata;



@interface CKSearchActivityItemProvider : UIActivityItemProvider

@property (retain, nonatomic) LPLinkMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) id *payload; // ivar: _payload


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithPlaceholderItem:(id)arg0 metadata:(id)arg1 ;
-(id)item;


@end


#endif