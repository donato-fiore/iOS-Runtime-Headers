// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPDIALERNUMBERPAD_H
#define TPDIALERNUMBERPAD_H

@class NSString;
@protocol TPDialerKeypadProtocol, TPDialerKeypadDelegate;


#import "TPNumberPad.h"
#import "TPDialerSoundController.h"

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol>



@property (readonly, copy) NSString *debugDescription;
@property NSObject<TPDialerKeypadDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL playsSounds; // ivar: _playsSounds
@property (retain) TPDialerSoundController *soundController; // ivar: _soundController
@property (readonly) Class superclass;


+(id)dialerNumberPadFullCharacters;
+(id)dialerNumberPadNumericCharacters;
-(NSInteger)indexForHighlightedKey;
-(void)buttonDown:(id)arg0 ;
-(void)buttonLongPressed:(id)arg0 ;
-(void)buttonTapped:(id)arg0 ;
-(void)buttonUp:(id)arg0 ;
-(void)buttonUpOutside:(id)arg0 ;
-(void)highlightKeyAtIndex:(NSInteger)arg0 ;


@end


#endif