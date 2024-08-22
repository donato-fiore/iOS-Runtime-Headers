// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBNAVIGATIONBARMODEL_H
#define AMSUIWEBNAVIGATIONBARMODEL_H

@class NSString, NSArray;
@protocol AMSUIWebModelInterface;

#import <Foundation/Foundation.h>

#import "AMSUIWebButtonModel.h"

@interface AMSUIWebNavigationBarModel : NSObject <AMSUIWebModelInterface>



@property (retain, nonatomic) NSString *backButtonTitle; // ivar: _backButtonTitle
@property (retain, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesBackButton; // ivar: _hidesBackButton
@property (readonly, nonatomic) BOOL includesLeftItems;
@property (readonly, nonatomic) BOOL includesRightItems;
@property (retain, nonatomic) AMSUIWebButtonModel *leftButton; // ivar: _leftButton
@property (retain, nonatomic) NSArray *leftButtons; // ivar: _leftButtons
@property (retain, nonatomic) AMSUIWebButtonModel *rightButton; // ivar: _rightButton
@property (retain, nonatomic) NSArray *rightButtons; // ivar: _rightButtons
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;


@end


#endif