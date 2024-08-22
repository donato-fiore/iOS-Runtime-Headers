// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBBARBUTTONITEMMODEL_H
#define AMSUIWEBBARBUTTONITEMMODEL_H

@class NSArray, NSString;
@protocol AMSUIWebModelInterface;

#import <Foundation/Foundation.h>

#import "AMSUIWebAppViewModel.h"
#import "AMSUIWebButtonModel.h"

@interface AMSUIWebBarButtonItemModel : NSObject <AMSUIWebModelInterface>



@property (retain, nonatomic) AMSUIWebAppViewModel *appViewModel; // ivar: _appViewModel
@property (retain, nonatomic) AMSUIWebButtonModel *buttonModel; // ivar: _buttonModel
@property (retain, nonatomic) NSArray *conditionalButtonModels; // ivar: _conditionalButtonModels
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;


@end


#endif