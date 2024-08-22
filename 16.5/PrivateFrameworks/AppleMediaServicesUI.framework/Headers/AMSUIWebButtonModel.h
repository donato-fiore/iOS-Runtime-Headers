// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBBUTTONMODEL_H
#define AMSUIWEBBUTTONMODEL_H

@class NSString, NSDictionary;
@protocol AMSUIWebModelInterface, AMSUIWebActionRunnable;

#import <Foundation/Foundation.h>

#import "AMSUIWebActivityIndicatorModel.h"

@interface AMSUIWebButtonModel : NSObject <AMSUIWebModelInterface>



@property (retain, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (retain, nonatomic) NSObject<AMSUIWebActionRunnable> *action; // ivar: _action
@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (retain, nonatomic) AMSUIWebActivityIndicatorModel *activityIndicator; // ivar: _activityIndicator
@property (nonatomic) BOOL bold; // ivar: _bold
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *keyEquivalent; // ivar: _keyEquivalent
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSDictionary *underlyingJSObject; // ivar: _underlyingJSObject


-(NSInteger)_barButtonItemStyle;
-(id)_createProxCardItemWithActionBlock:(id)arg0 ;
-(id)_createSpinnerItem;
-(id)_imageForButtonWithNavStyle:(NSInteger)arg0 ;
-(id)createBarButtonItemWithNavigationBarModel:(id)arg0 actionBlock:(id)arg1 ;
-(id)createDialogAction;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;


@end


#endif