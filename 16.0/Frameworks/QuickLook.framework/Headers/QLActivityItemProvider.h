// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLACTIVITYITEMPROVIDER_H
#define QLACTIVITYITEMPROVIDER_H

@class QLItem, NSString;
@protocol UIActivityItemSource;

#import <Foundation/Foundation.h>

#import "QLPreviewPrinter.h"

@interface QLActivityItemProvider : NSObject <UIActivityItemSource>



@property (retain) QLItem *activityPreviewItem; // ivar: _activityPreviewItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) QLPreviewPrinter *printer; // ivar: _printer
@property (readonly) Class superclass;


-(id)_pdfPreviewDataAtURL:(id)arg0 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)activityViewControllerPlaceholderItems:(id)arg0 ;
-(id)mainItem;
-(id)printInfo;


@end


#endif