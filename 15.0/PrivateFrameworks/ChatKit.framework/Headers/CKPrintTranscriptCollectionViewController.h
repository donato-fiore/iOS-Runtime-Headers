// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPRINTTRANSCRIPTCOLLECTIONVIEWCONTROLLER_H
#define CKPRINTTRANSCRIPTCOLLECTIONVIEWCONTROLLER_H



#import "CKTranscriptCollectionViewController.h"

@interface CKPrintTranscriptCollectionViewController : CKTranscriptCollectionViewController



-(id)initWithConversation:(id)arg0 delegate:(id)arg1 balloonMaxWidth:(CGFloat)arg2 marginInsets:(struct UIEdgeInsets )arg3 ;
-(void)chatItemsDidChange:(id)arg0 ;
-(void)updateUIContents;


@end


#endif