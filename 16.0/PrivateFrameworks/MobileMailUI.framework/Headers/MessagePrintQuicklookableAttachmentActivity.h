// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MESSAGEPRINTQUICKLOOKABLEATTACHMENTACTIVITY_H
#define MESSAGEPRINTQUICKLOOKABLEATTACHMENTACTIVITY_H

@class UIActivity, UIPrintPageRenderer;



@interface MessagePrintQuicklookableAttachmentActivity : UIActivity

@property (retain, nonatomic) UIPrintPageRenderer *pageRenderer; // ivar: _pageRenderer


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithPrintPageRenderer:(id)arg0 ;
-(void)performActivity;


@end


#endif