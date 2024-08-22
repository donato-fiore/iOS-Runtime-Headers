// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTATTACHMENTDRAWINGVIEWPROVIDER_H
#define PKTEXTATTACHMENTDRAWINGVIEWPROVIDER_H

@class NSTextAttachmentViewProvider;



@interface PKTextAttachmentDrawingViewProvider : NSTextAttachmentViewProvider



+(BOOL)isSystemNoteTakingEnabled;
+(Class)drawingClassForFileType:(id)arg0 ;
+(Class)drawingViewClassForDrawingClass:(Class)arg0 ;
+(Class)tiledViewClassForDrawingClass:(Class)arg0 ;
+(void)didInsertDrawingAttachment:(id)arg0 ;
+(void)registerViewProviderClassIfNecessary;
-(void)loadView;


@end


#endif