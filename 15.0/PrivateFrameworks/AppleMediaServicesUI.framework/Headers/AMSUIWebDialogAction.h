// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBDIALOGACTION_H
#define AMSUIWEBDIALOGACTION_H

@class NSArray, NSString, AMSDialogRequest;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"

@interface AMSUIWebDialogAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (retain, nonatomic) NSArray *buttonModels; // ivar: _buttonModels
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pauseTimeouts; // ivar: _pauseTimeouts
@property (retain, nonatomic) AMSDialogRequest *request; // ivar: _request
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif