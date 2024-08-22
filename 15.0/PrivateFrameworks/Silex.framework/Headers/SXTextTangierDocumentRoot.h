// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXTEXTTANGIERDOCUMENTROOT_H
#define SXTEXTTANGIERDOCUMENTROOT_H

@class TSKDocumentRoot, TSSStylesheet, UIViewController;



@interface SXTextTangierDocumentRoot : TSKDocumentRoot

@property (readonly, nonatomic) TSSStylesheet *aStylesheet; // ivar: _aStylesheet
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)stylesheet;


@end


#endif