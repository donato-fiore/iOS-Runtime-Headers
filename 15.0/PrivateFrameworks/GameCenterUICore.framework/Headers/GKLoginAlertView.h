// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKLOGINALERTVIEW_H
#define GKLOGINALERTVIEW_H

@class UIAlertView, NSString;
@protocol UITextFieldDelegate;



@interface GKLoginAlertView : UIAlertView <UITextFieldDelegate>

 {
    NSUInteger _passwordFieldIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *password;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // ivar: _username


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 uneditableUsername:(id)arg1 ;
-(void)_updateFrameForDisplay;


@end


#endif