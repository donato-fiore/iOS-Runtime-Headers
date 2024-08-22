// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAUTHORIZATIONPANECONTEXT_H
#define AKAUTHORIZATIONPANECONTEXT_H

@class NSMutableArray, UIStackView;

#import <Foundation/Foundation.h>

#import "AKAuthorizationPaneViewController.h"

@interface AKAuthorizationPaneContext : NSObject

@property (retain, nonatomic) NSMutableArray *internalMutableConstraints; // ivar: _internalMutableConstraints
@property (readonly, nonatomic) NSMutableArray *mutableConstraints;
@property (readonly, nonatomic) AKAuthorizationPaneViewController *paneViewController; // ivar: _paneViewController
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)initWithPaneViewController:(id)arg0 stackView:(id)arg1 ;
-(id)initWithPaneViewController:(id)arg0 stackView:(id)arg1 mutableConstraints:(id)arg2 ;
-(void)addEmptyViewWithSpacing:(CGFloat)arg0 ;
-(void)addSubPane:(id)arg0 ;


@end


#endif