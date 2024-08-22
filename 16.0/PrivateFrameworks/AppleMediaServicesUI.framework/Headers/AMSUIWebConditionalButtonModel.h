// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIWEBCONDITIONALBUTTONMODEL_H
#define AMSUIWEBCONDITIONALBUTTONMODEL_H

@class NSString;
@protocol AMSUIWebModelInterface;

#import <Foundation/Foundation.h>

#import "AMSUIWebButtonModel.h"

@interface AMSUIWebConditionalButtonModel : NSObject <AMSUIWebModelInterface>



@property (retain, nonatomic) AMSUIWebButtonModel *button; // ivar: _button
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideOnModal; // ivar: _hideOnModal
@property (nonatomic) BOOL hideOnPush; // ivar: _hideOnPush
@property (readonly) Class superclass;


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;


@end


#endif