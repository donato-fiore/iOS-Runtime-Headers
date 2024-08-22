// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHARESHEETSAFARIWEBPAGE_H
#define WFSHARESHEETSAFARIWEBPAGE_H

@class NSString, NSData;


#import "WFSafariWebPage.h"

@interface WFShareSheetSafariWebPage : WFSafariWebPage {
    NSString *_selectionText;
    NSData *_selectionHTML;
}


@property (readonly, copy, nonatomic) NSString *javaScriptRunnerIdentifier; // ivar: _javaScriptRunnerIdentifier


+(BOOL)supportsSecureCoding;
+(id)webPageFromPreprocessingResult:(id)arg0 javaScriptRunnerIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 pageTitle:(id)arg1 selectionText:(id)arg2 selectionHTML:(id)arg3 documentHTML:(id)arg4 javaScriptRunnerIdentifier:(id)arg5 ;
-(id)selectionHTML;
-(id)selectionText;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif