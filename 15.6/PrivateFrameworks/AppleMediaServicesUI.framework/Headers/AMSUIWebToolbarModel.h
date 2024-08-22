// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBTOOLBARMODEL_H
#define AMSUIWEBTOOLBARMODEL_H

@class NSString;
@protocol AMSUIWebModelInterface;

#import <Foundation/Foundation.h>

#import "AMSUIWebButtonModel.h"

@interface AMSUIWebToolbarModel : NSObject <AMSUIWebModelInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMSUIWebButtonModel *leftButton; // ivar: _leftButton
@property (retain, nonatomic) AMSUIWebButtonModel *rightButton; // ivar: _rightButton
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;


@end


#endif