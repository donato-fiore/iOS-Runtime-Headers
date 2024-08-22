// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFDOWNLOADACTIVITYITEMPROVIDER_H
#define _SFDOWNLOADACTIVITYITEMPROVIDER_H

@class SFActivityItemProvider, NSString;
@protocol UIActivityItemApplicationExtensionSource;


#import "_SFQuickLookDocument.h"

@interface _SFDownloadActivityItemProvider : SFActivityItemProvider <UIActivityItemApplicationExtensionSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFQuickLookDocument *quickLookDocument; // ivar: _quickLookDocument
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewControllerApplicationExtensionItem:(id)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithQuickLookDocument:(id)arg0 URL:(id)arg1 webView:(id)arg2 ;
-(id)item;
-(id)pageTitle;


@end


#endif