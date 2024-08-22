// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUIREUSABLEFOOTERVIEW_H
#define SIRIUIREUSABLEFOOTERVIEW_H

@class UICollectionReusableView, NSString;
@protocol SiriUIReusableView;


#import "SiriUISnippetViewController.h"

@interface SiriUIReusableFooterView : UICollectionReusableView <SiriUIReusableView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) Class superclass;


+(CGFloat)defaultHeight;
+(id)elementKind;
+(id)reuseIdentifier;
-(struct UIEdgeInsets )edgeInsets;


@end


#endif