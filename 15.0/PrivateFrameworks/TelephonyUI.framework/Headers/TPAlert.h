// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPALERT_H
#define TPALERT_H


#import <Foundation/Foundation.h>


@interface TPAlert : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) *__CFUserNotification userNotification; // ivar: _userNotification


-(id)alternateButtonTitle;
-(id)defaultButtonTitle;
-(id)message;
-(id)otherButtonTitle;
-(id)title;
-(void)alternateResponse;
-(void)dealloc;
-(void)defaultResponse;
-(void)otherResponse;
-(void)show;
-(void)showOnViewController:(id)arg0 ;


@end


#endif