// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDINTERACTIONPROTOCOLEVENTLAYOUTDIDCHANGE_H
#define TIKEYBOARDINTERACTIONPROTOCOLEVENTLAYOUTDIDCHANGE_H

@class NSString, TIKeyboardLayout;
@protocol TIKeyboardInteractionProtocolEvent;


#import "TIKeyboardInteractionProtocolBase.h"

@interface TIKeyboardInteractionProtocolEventLayoutDidChange : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TIKeyboardLayout *keyLayout; // ivar: _keyLayout
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayout:(id)arg0 keyboardState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sendTo:(id)arg0 ;


@end


#endif