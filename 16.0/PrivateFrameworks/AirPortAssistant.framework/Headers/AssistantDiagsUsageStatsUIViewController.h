// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASSISTANTDIAGSUSAGESTATSUIVIEWCONTROLLER_H
#define ASSISTANTDIAGSUSAGESTATSUIVIEWCONTROLLER_H

@class NSString, UIView;
@protocol TableViewManagerDelegate, UINavigationControllerDelegate, TextLinkButtonDelegate;


#import "AssistantSubUIViewController.h"
#import "TextLinkButton.h"

@interface AssistantDiagsUsageStatsUIViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate, TextLinkButtonDelegate>

 {
    TextLinkButton *linkButton;
    id *previousNavDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *linkContainerView; // ivar: _linkContainerView
@property (readonly) Class superclass;


-(void)dealloc;
-(void)handleTextLinkTap;
-(void)loadView;
-(void)setUpInitialTableFooter;
-(void)touchInCellAtIndexPath:(id)arg0 ;


@end


#endif