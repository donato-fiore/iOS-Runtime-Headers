// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDINTERACTIONPROTOCOLEVENTADDDRAWINPUTWITHSYLLABLECOUNT_H
#define TIKEYBOARDINTERACTIONPROTOCOLEVENTADDDRAWINPUTWITHSYLLABLECOUNT_H

@class NSString, NSNumber;
@protocol TIKeyboardInteractionProtocolEvent;


#import "TIKeyboardInteractionProtocolBase.h"

@interface TIKeyboardInteractionProtocolEventAddDrawInputWithSyllableCount : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *syllableCount; // ivar: _syllableCount


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSyllableCount:(NSUInteger)arg0 keyboardState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sendTo:(id)arg0 ;


@end


#endif