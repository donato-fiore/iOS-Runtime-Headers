// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBBUTTONMODEL_H
#define AMSUIWEBBUTTONMODEL_H

@class NSString, NSDictionary;
@protocol AMSUIWebModelInterface, AMSUIWebActionRunnable;

#import <Foundation/Foundation.h>

#import "AMSUIWebActivityIndicatorModel.h"
#import "AMSUIWebAppViewModel.h"

@interface AMSUIWebButtonModel : NSObject <AMSUIWebModelInterface>



@property (retain, nonatomic) NSObject<AMSUIWebActionRunnable> *action; // ivar: _action
@property (nonatomic) SEL actionSelector; // ivar: _actionSelector
@property (retain, nonatomic) AMSUIWebActivityIndicatorModel *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) AMSUIWebAppViewModel *appView; // ivar: _appView
@property (nonatomic) BOOL bold; // ivar: _bold
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (retain, nonatomic) id *target; // ivar: _target
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSDictionary *underlyingJSObject; // ivar: _underlyingJSObject


-(NSInteger)_barButtonItemStyle;
-(id)_createAppViewItemWithModel:(id)arg0 ;
-(id)_createProxCardItemWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(id)_createSpinnerItem;
-(id)_imageForButtonWithNavStyle:(NSInteger)arg0 ;
-(id)createBarButtonItemWithTarget:(id)arg0 selector:(SEL)arg1 navBar:(id)arg2 ;
-(id)createDialogAction;
-(id)initWithAppViewObject:(id)arg0 context:(id)arg1 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;


@end


#endif