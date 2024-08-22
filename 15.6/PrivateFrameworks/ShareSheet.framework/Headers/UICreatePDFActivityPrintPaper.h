// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICREATEPDFACTIVITYPRINTPAPER_H
#define UICREATEPDFACTIVITYPRINTPAPER_H

@class UIPrintPaper;



@interface UICreatePDFActivityPrintPaper : UIPrintPaper

@property (nonatomic) CGSize _paperSize; // ivar: __paperSize


-(id)_keywordForPDFMetadata;
-(id)initWithPaperSize:(struct CGSize )arg0 ;
-(struct CGRect )printableRect;
-(struct CGSize )paperSize;


@end


#endif