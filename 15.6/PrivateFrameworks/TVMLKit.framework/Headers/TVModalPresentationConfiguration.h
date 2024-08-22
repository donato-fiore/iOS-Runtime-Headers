// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVMODALPRESENTATIONCONFIGURATION_H
#define TVMODALPRESENTATIONCONFIGURATION_H

@class NSArray, UIBarButtonItem, UIView;

#import <Foundation/Foundation.h>


@interface TVModalPresentationConfiguration : NSObject

@property (retain, nonatomic) NSArray *alertActions; // ivar: _alertActions
@property (nonatomic) BOOL allowsModalOverModal; // ivar: _allowsModalOverModal
@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (nonatomic, getter=isMenuDismissable) BOOL menuDismissable; // ivar: _menuDismissable
@property (nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden; // ivar: _navigationBarHidden
@property (nonatomic) NSUInteger popOverArrowDirection; // ivar: _popOverArrowDirection
@property (retain, nonatomic) UIBarButtonItem *popOverSourceBarButtonItem; // ivar: _popOverSourceBarButtonItem
@property (nonatomic) CGRect popOverSourceRect; // ivar: _popOverSourceRect
@property (retain, nonatomic) UIView *popOverSourceView; // ivar: _popOverSourceView
@property (nonatomic) NSInteger type; // ivar: _type


+(id)presentationTypeKeyMap;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(void)_applyAlertActionsForController:(id)arg0 ;


@end


#endif