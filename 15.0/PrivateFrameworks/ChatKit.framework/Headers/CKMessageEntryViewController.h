// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMESSAGEENTRYVIEWCONTROLLER_H
#define CKMESSAGEENTRYVIEWCONTROLLER_H

@class UIInputViewController;


#import "CKMessageEntryView.h"

@interface CKMessageEntryViewController : UIInputViewController

@property (readonly, nonatomic) CKMessageEntryView *entryView; // ivar: _entryView
@property (nonatomic) BOOL inputAccessoryViewControllerEnabled; // ivar: _inputAccessoryViewControllerEnabled


+(BOOL)_requiresProxyInterface;
-(id)initWithEntryView:(id)arg0 ;
-(void)loadView;


@end


#endif