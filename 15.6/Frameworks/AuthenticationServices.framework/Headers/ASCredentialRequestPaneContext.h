// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCREDENTIALREQUESTPANECONTEXT_H
#define ASCREDENTIALREQUESTPANECONTEXT_H

@class UIStackView;

#import <Foundation/Foundation.h>

#import "ASCredentialRequestPaneViewController.h"

@interface ASCredentialRequestPaneContext : NSObject

@property (readonly, weak, nonatomic) ASCredentialRequestPaneViewController *paneViewController; // ivar: _paneViewController
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)initWithPaneViewController:(id)arg0 stackView:(id)arg1 ;
-(void)addEmptyViewWithSpacing:(CGFloat)arg0 ;
-(void)addSubPane:(id)arg0 withCustomSpacingAfter:(CGFloat)arg1 ;


@end


#endif