// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKAUXILLIARYTEXTVIEW_H
#define TLKAUXILLIARYTEXTVIEW_H

@class NSString;
@protocol NUIContainerViewDelegate;


#import "TLKView.h"
#import "TLKLabel.h"
#import "TLKFormattedText.h"
#import "TLKStackView.h"

@interface TLKAuxilliaryTextView : TLKView <NUIContainerViewDelegate>



@property (retain, nonatomic) TLKLabel *bottomLabel; // ivar: _bottomLabel
@property (retain, nonatomic) TLKFormattedText *bottomText; // ivar: _bottomText
@property (retain, nonatomic) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKLabel *middleLabel; // ivar: _middleLabel
@property (retain, nonatomic) TLKFormattedText *middleText; // ivar: _middleText
@property (readonly) Class superclass;
@property (retain, nonatomic) TLKLabel *topLabel; // ivar: _topLabel
@property (retain, nonatomic) TLKFormattedText *topText; // ivar: _topText
@property (nonatomic) BOOL useCompactMode; // ivar: _useCompactMode


-(id)setupContentView;
-(void)observedPropertiesChanged;


@end


#endif