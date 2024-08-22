// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15REMINDERSUICORE32TTRIMENUBUTTONATTACHMENTPROVIDER_H
#define _TTC15REMINDERSUICORE32TTRIMENUBUTTONATTACHMENTPROVIDER_H

@class NSTextAttachmentViewProvider;



@interface _TtC15RemindersUICore32TTRIMenuButtonAttachmentProvider : NSTextAttachmentViewProvider {
    ? lightBackgroundAlpha;
    ? darkBackgroundAlpha;
}




-(id)initWithTextAttachment:(id)arg0 parentView:(id)arg1 textLayoutManager:(id)arg2 location:(id)arg3 ;
-(struct CGRect )attachmentBoundsForAttributes:(id)arg0 location:(id)arg1 textContainer:(id)arg2 proposedLineFragment:(struct CGRect )arg3 position:(struct CGPoint )arg4 ;
-(void)loadView;


@end


#endif