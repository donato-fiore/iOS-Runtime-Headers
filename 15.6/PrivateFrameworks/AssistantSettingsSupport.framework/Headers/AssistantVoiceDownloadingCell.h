// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSISTANTVOICEDOWNLOADINGCELL_H
#define ASSISTANTVOICEDOWNLOADINGCELL_H

@class PSTableCell;


#import "AssistantVoiceDownloadingView.h"

@interface AssistantVoiceDownloadingCell : PSTableCell {
    AssistantVoiceDownloadingView *_downloadingView;
    BOOL _downloading;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setDownloading:(BOOL)arg0 ;


@end


#endif