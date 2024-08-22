// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFWEBUIDIALOG_H
#define SFWEBUIDIALOG_H

@class SFDialog, WebUIAlert;



@interface SFWebUIDialog : SFDialog {
    int _finalAction;
    id *_completionHandler;
    BOOL _shouldIgnoreGlobalModalUIDisplayPolicy;
}


@property (readonly, nonatomic) WebUIAlert *alert; // ivar: _alert


-(BOOL)shouldIgnoreGlobalModalUIDisplayPolicy;
-(NSInteger)presentationStyle;
-(id)initWithAlert:(id)arg0 completionHandler:(id)arg1 ;
-(id)newViewControllerRepresentationWithCompletionHandler:(id)arg0 ;
-(void)didCompleteWithResponse:(id)arg0 ;


@end


#endif