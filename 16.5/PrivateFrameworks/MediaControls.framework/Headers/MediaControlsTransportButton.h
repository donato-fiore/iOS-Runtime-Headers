// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSTRANSPORTBUTTON_H
#define MEDIACONTROLSTRANSPORTBUTTON_H

@class MPButton, MPCPlayerCommandRequest, NSString;



@interface MediaControlsTransportButton : MPButton

@property (nonatomic) CGFloat cursorScale; // ivar: _cursorScale
@property (retain, nonatomic) MPCPlayerCommandRequest *holdBeginCommandRequest; // ivar: _holdBeginCommandRequest
@property (retain, nonatomic) MPCPlayerCommandRequest *holdEndCommandRequest; // ivar: _holdEndCommandRequest
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isPerformingHighlightAnimation) BOOL performingHighlightAnimation; // ivar: _performingHighlightAnimation
@property (nonatomic) BOOL shouldPresentActionSheet; // ivar: _shouldPresentActionSheet
@property (retain, nonatomic) MPCPlayerCommandRequest *touchUpInsideCommandRequest; // ivar: _touchUpInsideCommandRequest


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif