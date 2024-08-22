// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTCOMPOSEREVIEWVIEWCONTROLLER_H
#define SUSCRIPTCOMPOSEREVIEWVIEWCONTROLLER_H



#import "SUScriptViewController.h"
#import "SUScriptReview.h"

@interface SUScriptComposeReviewViewController : SUScriptViewController

@property (readonly) SUScriptReview *review;


+(id)webScriptNameForKey:(char *)arg0 ;
-(id)_className;
-(id)attributeKeys;
-(id)init;
-(id)initWithScriptReview:(id)arg0 clientInterface:(id)arg1 ;
-(id)newNativeViewController;
-(id)scriptAttributeKeys;


@end


#endif