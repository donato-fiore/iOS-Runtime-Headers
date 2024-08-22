// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCOMPONENTINTERACTIONPREVIEWCONTEXT_H
#define SXCOMPONENTINTERACTIONPREVIEWCONTEXT_H

@class NSString, UIViewController;
@protocol SXComponentInteractionPreviewContext;

#import <Foundation/Foundation.h>


@interface SXComponentInteractionPreviewContext : NSObject <SXComponentInteractionPreviewContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithViewController:(id)arg0 sourceRect:(struct CGRect )arg1 ;


@end


#endif