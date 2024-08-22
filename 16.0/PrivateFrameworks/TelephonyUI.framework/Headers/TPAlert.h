// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPALERT_H
#define TPALERT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TPAlert : NSObject

@property (readonly, nonatomic) NSString *alternateButtonTitle;
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSString *defaultButtonTitle;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSString *otherButtonTitle;
@property (readonly, nonatomic) NSString *title;
@property (nonatomic) *__CFUserNotification userNotification; // ivar: _userNotification


-(void)alternateResponse;
-(void)dealloc;
-(void)defaultResponse;
-(void)invalidate;
-(void)otherResponse;
-(void)show;
-(void)showOnViewController:(id)arg0 ;


@end


#endif