// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCSIGNINPAGEAUTHENTICATIONSECTIONCONTROLLER_H
#define MCSIGNINPAGEAUTHENTICATIONSECTIONCONTROLLER_H

@class NSString, AKInlineSignInViewController;
@protocol MCProfileTitlePageSectionController;

#import <Foundation/Foundation.h>

#import "MCSignInPageAuthenticationCell.h"

@interface MCSignInPageAuthenticationSectionController : NSObject <MCProfileTitlePageSectionController>



@property (nonatomic) CGFloat authSectionHeight; // ivar: _authSectionHeight
@property (retain, nonatomic) MCSignInPageAuthenticationCell *cell; // ivar: _cell
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AKInlineSignInViewController *inlineSignInViewController; // ivar: _inlineSignInViewController
@property (readonly) Class superclass;


-(CGFloat)heightForHeader;
-(CGFloat)heightForRowAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfRows;
-(id)cellForRowAtIndex:(NSUInteger)arg0 ;
-(id)titleForHeader;
-(void)registerCellClassWithTableView:(id)arg0 ;


@end


#endif