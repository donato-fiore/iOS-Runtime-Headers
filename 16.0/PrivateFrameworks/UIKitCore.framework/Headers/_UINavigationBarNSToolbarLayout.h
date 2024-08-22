// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARNSTOOLBARLAYOUT_H
#define _UINAVIGATIONBARNSTOOLBARLAYOUT_H

@class NSString, NSArray, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIImage.h"
#import "UISearchTextField.h"
#import "UIBarButtonItemGroup.h"

@interface _UINavigationBarNSToolbarLayout : NSObject <NSCopying>



@property (copy, nonatomic) id *backButtonHandler; // ivar: _backButtonHandler
@property (retain, nonatomic) UIImage *backButtonImage; // ivar: _backButtonImage
@property (copy, nonatomic) NSString *backButtonTitle; // ivar: _backButtonTitle
@property (copy, nonatomic) NSArray *centerGroups; // ivar: _centerGroups
@property (copy, nonatomic) NSString *customizationIdentifier; // ivar: _customizationIdentifier
@property (retain, nonatomic) UISearchTextField *inlineSearchTextField; // ivar: _inlineSearchTextField
@property (copy, nonatomic) NSArray *leadingGroups; // ivar: _leadingGroups
@property (nonatomic) NSInteger location; // ivar: _location
@property (retain, nonatomic) UIBarButtonItemGroup *pinnedTrailingGroup; // ivar: _pinnedTrailingGroup
@property (copy, nonatomic) NSURL *representedURL; // ivar: _representedURL
@property (nonatomic) BOOL showSidebarToggle; // ivar: _showSidebarToggle
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSArray *trailingGroups; // ivar: _trailingGroups


-(id)_initWithLayout:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif