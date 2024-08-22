// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDSECURETOUCHSLOT_H
#define TIKEYBOARDSECURETOUCHSLOT_H

@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface TIKeyboardSecureTouchSlot : NSObject

@property (nonatomic) NSUInteger authenticationMessageContext; // ivar: _authenticationMessageContext
@property (retain, nonatomic) NSObject<BSInvalidatable> *invalidatable; // ivar: _invalidatable
@property (nonatomic) unsigned int slotID; // ivar: _slotID


-(void)dealloc;


@end


#endif