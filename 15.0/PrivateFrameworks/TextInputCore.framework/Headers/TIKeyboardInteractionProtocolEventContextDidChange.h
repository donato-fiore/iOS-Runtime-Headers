// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDINTERACTIONPROTOCOLEVENTCONTEXTDIDCHANGE_H
#define TIKEYBOARDINTERACTIONPROTOCOLEVENTCONTEXTDIDCHANGE_H

@class NSString, TIDocumentState;
@protocol TIKeyboardInteractionProtocolEvent;


#import "TIKeyboardInteractionProtocolBase.h"

@interface TIKeyboardInteractionProtocolEventContextDidChange : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>



@property (readonly, nonatomic) BOOL cursorMoved; // ivar: _cursorMoved
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TIDocumentState *documentState; // ivar: _documentState
@property (readonly, nonatomic) BOOL extendsPriorWord; // ivar: _extendsPriorWord
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _NSRange inWordRange; // ivar: _inWordRange
@property (readonly, nonatomic) NSUInteger selectionLocation; // ivar: _selectionLocation
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *word; // ivar: _word
@property (readonly, nonatomic) BOOL wordDelete; // ivar: _wordDelete


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 wordDelete:(BOOL)arg1 cursorMoved:(BOOL)arg2 extendsPriorWord:(BOOL)arg3 inWord:(id)arg4 range:(struct _NSRange )arg5 selectionLocation:(NSUInteger)arg6 keyboardState:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sendTo:(id)arg0 ;


@end


#endif