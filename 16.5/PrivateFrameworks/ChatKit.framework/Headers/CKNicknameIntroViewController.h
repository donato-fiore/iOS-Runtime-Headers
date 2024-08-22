// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKNICKNAMEINTROVIEWCONTROLLER_H
#define CKNICKNAMEINTROVIEWCONTROLLER_H

@class OBWelcomeController;


#import "CKNicknamePreviewView.h"

@interface CKNicknameIntroViewController : OBWelcomeController

@property (retain, nonatomic) CKNicknamePreviewView *nicknamePreviewView; // ivar: _nicknamePreviewView


-(CGFloat)_contentViewHeight;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif