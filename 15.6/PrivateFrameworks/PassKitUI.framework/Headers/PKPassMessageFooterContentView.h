// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSMESSAGEFOOTERCONTENTVIEW_H
#define PKPASSMESSAGEFOOTERCONTENTVIEW_H



#import "PKPassFooterContentView.h"
#import "PKDashboardMessagesView.h"

@interface PKPassMessageFooterContentView : PKPassFooterContentView {
    PKDashboardMessagesView *_messagesView;
}




-(id)initWithPass:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateWithMessages:(id)arg0 ;


@end


#endif