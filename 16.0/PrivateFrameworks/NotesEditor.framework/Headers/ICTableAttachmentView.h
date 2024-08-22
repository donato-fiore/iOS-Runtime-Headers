// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTABLEATTACHMENTVIEW_H
#define ICTABLEATTACHMENTVIEW_H

@class NSMutableArray;


#import "ICAttachmentView.h"

@interface ICTableAttachmentView : ICAttachmentView

@property (retain, nonatomic) NSMutableArray *outsideViews; // ivar: _outsideViews


-(void)setupEventHandling;
-(void)sharedInit:(BOOL)arg0 ;
-(void)updateHighlights;


@end


#endif