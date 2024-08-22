// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11EMOJIPOSTER39EMOJIFOREGROUNDREPLICATORVIEWCONTROLLER_H
#define _TTC11EMOJIPOSTER39EMOJIFOREGROUNDREPLICATORVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC11EmojiPoster39EmojiForegroundReplicatorViewController : UIViewController {
    ? emoji;
    ? emojiSize;
    ? spacingFactor;
    ? scale;
    ? scaleDelta;
    ? emojiLayer;
    ? secondaryEmojiLayer;
    ? horizontalReplicatorLayer;
    ? offsetHorizontalReplicatorLayer;
    ? verticalReplicatorLayer;
    ? offsetVerticalReplicatorLayer;
    ? pinchGestureRecognizer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)adjustScaleWithGesture:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif