// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTMODALDIALOG_H
#define SUSCRIPTMODALDIALOG_H

@class ISDialog;
@protocol SUScriptModalDialogDelegate;

#import <Foundation/Foundation.h>


@interface SUScriptModalDialog : NSObject {
    ISDialog *_dialog;
}


@property (nonatomic) NSObject<SUScriptModalDialogDelegate> *delegate; // ivar: _delegate


+(id)titleForURL:(id)arg0 ;
-(id)_copyResponseByRunningModal;
-(id)copyResponseByRunningModal;
-(id)initWithDialog:(id)arg0 ;
-(void)dealloc;


@end


#endif