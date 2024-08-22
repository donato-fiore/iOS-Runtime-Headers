// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTOCATTACHMENT_H
#define TSWPTOCATTACHMENT_H



#import "TSWPDrawableAttachment.h"
#import "TSWPTOCInfo.h"

@interface TSWPTOCAttachment : TSWPDrawableAttachment

@property (readonly, retain, nonatomic) TSWPTOCInfo *tocInfo;


-(void)loadFromUnarchiver:(id)arg0 ;
-(void)loadTOCAttachmentMessage:(*void)arg0 fromUnarchiver:(id)arg1 ;
-(void)saveTOCAttachmentMessage:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;


@end


#endif