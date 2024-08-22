// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSENDANIMATIONCONTEXT_H
#define CKSENDANIMATIONCONTEXT_H

@class NSArray, CABackdropLayer, UIView, NSString;
@protocol CKSendAnimationContext;

#import <Foundation/Foundation.h>


@interface CKSendAnimationContext : NSObject <CKSendAnimationContext>



@property (copy, nonatomic) NSArray *animatableTextViews; // ivar: _animatableTextViews
@property (copy, nonatomic) NSArray *animatableViews; // ivar: _animatableViews
@property (retain, nonatomic) CABackdropLayer *backdropLayer; // ivar: _backdropLayer
@property (nonatomic) BOOL beginAnimationFromTranscriptPresentedState; // ivar: _beginAnimationFromTranscriptPresentedState
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *framesOfAddedChatItems; // ivar: _framesOfAddedChatItems
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *impactIdentifier; // ivar: _impactIdentifier
@property (nonatomic) BOOL isSender; // ivar: _isSender
@property (retain, nonatomic) NSArray *messages; // ivar: _messages
@property (nonatomic) BOOL shouldRepeat; // ivar: _shouldRepeat
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *throwBalloonViewAttributesCollection; // ivar: _throwBalloonViewAttributesCollection
@property (copy, nonatomic) NSArray *throwBalloonViews; // ivar: _throwBalloonViews




@end


#endif