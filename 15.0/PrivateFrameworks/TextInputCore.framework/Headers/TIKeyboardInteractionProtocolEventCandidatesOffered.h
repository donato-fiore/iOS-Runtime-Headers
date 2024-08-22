// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDINTERACTIONPROTOCOLEVENTCANDIDATESOFFERED_H
#define TIKEYBOARDINTERACTIONPROTOCOLEVENTCANDIDATESOFFERED_H

@class TIAutocorrectionList, NSString;
@protocol TIKeyboardInteractionProtocolEvent;


#import "TIKeyboardInteractionProtocolBase.h"

@interface TIKeyboardInteractionProtocolEventCandidatesOffered : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>



@property (readonly, nonatomic) TIAutocorrectionList *candidates; // ivar: _candidates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCandidatesOffered:(id)arg0 keyboardState:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sendTo:(id)arg0 ;


@end


#endif