// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDINTERACTIONPROTOCOLBASE_H
#define TIKEYBOARDINTERACTIONPROTOCOLBASE_H

@class TIKeyboardState;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIKeyboardInteractionProtocolBase : NSObject <NSSecureCoding>



@property (readonly, nonatomic) TIKeyboardState *keyboardState; // ivar: _keyboardState


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyboardState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif