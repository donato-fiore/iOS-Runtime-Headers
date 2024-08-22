// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ILCLASSIFICATIONUIEXTENSIONVIEWCONTROLLER_H
#define ILCLASSIFICATIONUIEXTENSIONVIEWCONTROLLER_H

@class UIViewController;


#import "ILClassificationUIExtensionContext.h"

@interface ILClassificationUIExtensionViewController : UIViewController

@property (readonly, nonatomic) ILClassificationUIExtensionContext *extensionContext;


-(id)classificationResponseForRequest:(id)arg0 ;
-(void)prepareForClassificationRequest:(id)arg0 ;


@end


#endif