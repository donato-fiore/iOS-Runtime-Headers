// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITYPOLOGYRECORDSKIPHITTEST_H
#define TITYPOLOGYRECORDSKIPHITTEST_H



#import "TITypologyRecord.h"
#import "TIKeyboardLayout.h"
#import "TIKeyboardState.h"
#import "TIKeyboardTouchEvent.h"

@interface TITypologyRecordSkipHitTest : TITypologyRecord

@property (retain, nonatomic) TIKeyboardLayout *keyLayout; // ivar: _keyLayout
@property (retain, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState
@property (retain, nonatomic) TIKeyboardTouchEvent *touchEvent; // ivar: _touchEvent


+(BOOL)supportsSecureCoding;
-(id)currentKeyboardState;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)applyToStatistic:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg0 ;


@end


#endif