// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPAPPLICATIONDELEGATE_H
#define TSWPAPPLICATIONDELEGATE_H

@class TSKApplicationDelegate;



@interface TSWPApplicationDelegate : TSKApplicationDelegate

@property (readonly, nonatomic) BOOL showChineseNamedPointSizes;


-(BOOL)isValidURLForImportedHyperlink:(id)arg0 targetDocumentRoot:(id)arg1 forCrossDocumentPaste:(BOOL)arg2 ;
-(id)defaultHyperlinkURL;
-(id)stringForEquationChoiceBody;
-(id)stringForEquationChoiceTitle;
-(id)stringForEquationChoiceUseEQKitButtonTitle;


@end


#endif