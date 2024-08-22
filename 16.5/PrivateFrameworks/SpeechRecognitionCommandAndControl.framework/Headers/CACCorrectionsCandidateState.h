// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACCORRECTIONSCANDIDATESTATE_H
#define CACCORRECTIONSCANDIDATESTATE_H

@class NSString;
@protocol TUICandidateViewState, TUICandidateViewStyle;

#import <Foundation/Foundation.h>


@interface CACCorrectionsCandidateState : NSObject <TUICandidateViewState>



@property (nonatomic) CGFloat additionalHeight; // ivar: _additionalHeight
@property (nonatomic) NSInteger arrowButtonDirection; // ivar: _arrowButtonDirection
@property (nonatomic) CGPoint arrowButtonOffset; // ivar: _arrowButtonOffset
@property (nonatomic) NSInteger arrowButtonPosition; // ivar: _arrowButtonPosition
@property (nonatomic) NSUInteger borders; // ivar: _borders
@property (nonatomic) BOOL candidateNumberEnabled; // ivar: _candidateNumberEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger disambiguationGridPosition; // ivar: _disambiguationGridPosition
@property (nonatomic) NSInteger disambiguationGridRowType; // ivar: _disambiguationGridRowType
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *disambiguationStyle; // ivar: _disambiguationStyle
@property (nonatomic) BOOL hasBackdrop; // ivar: _hasBackdrop
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger inlineTextViewPosition; // ivar: _inlineTextViewPosition
@property (nonatomic) NSInteger primaryGridRowType; // ivar: _primaryGridRowType
@property (nonatomic) NSInteger sortControlPosition; // ivar: _sortControlPosition
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) CGFloat yOffset; // ivar: _yOffset




@end


#endif