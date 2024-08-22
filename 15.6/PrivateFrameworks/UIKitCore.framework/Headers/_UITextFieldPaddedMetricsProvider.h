// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTFIELDPADDEDMETRICSPROVIDER_H
#define _UITEXTFIELDPADDEDMETRICSPROVIDER_H

@class NSString;
@protocol _UITextFieldMetricsProvider;

#import <Foundation/Foundation.h>


@interface _UITextFieldPaddedMetricsProvider : NSObject <_UITextFieldMetricsProvider>



@property (nonatomic) BOOL canIntrinsicHeightExceedContentHeight; // ivar: _canIntrinsicHeightExceedContentHeight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minimumIntrinsicHeight; // ivar: _minimumIntrinsicHeight
@property (readonly, nonatomic) CGFloat naturalHeight;
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (readonly, nonatomic) BOOL shouldExtendCaretHeight;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithPerEdgePadding:(struct UIEdgeInsets )arg0 ;
-(id)initWithSymmetricalPadding:(struct CGSize )arg0 ;
-(struct CGRect )contentFrameForBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicSizeForContentSize:(struct CGSize )arg0 ;


@end


#endif