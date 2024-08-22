// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUICLEARBACKGROUNDCELL_H
#define SIRIUICLEARBACKGROUNDCELL_H

@class UICollectionViewCell, NSString;
@protocol SiriUIReusableView;


#import "SiriUISnippetViewController.h"

@interface SiriUIClearBackgroundCell : UICollectionViewCell <SiriUIReusableView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) Class superclass;


+(CGFloat)defaultHeight;
+(id)elementKind;
+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif