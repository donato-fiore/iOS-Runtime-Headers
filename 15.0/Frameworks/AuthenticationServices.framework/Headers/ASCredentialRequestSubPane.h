// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCREDENTIALREQUESTSUBPANE_H
#define ASCREDENTIALREQUESTSUBPANE_H

@class UIView;

#import <Foundation/Foundation.h>


@interface ASCredentialRequestSubPane : NSObject

@property (nonatomic) CGFloat customSpacingAfter; // ivar: _customSpacingAfter
@property (readonly, nonatomic) UIView *view; // ivar: _view


-(id)initWithView:(id)arg0 ;
-(void)addToStackView:(id)arg0 withCustomSpacingAfter:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif