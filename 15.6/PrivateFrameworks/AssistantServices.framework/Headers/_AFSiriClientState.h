// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFSIRICLIENTSTATE_H
#define _AFSIRICLIENTSTATE_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface _AFSiriClientState : NSObject {
    NSMutableSet *_requestUUIDs;
}


@property (nonatomic) BOOL hasActiveSession; // ivar: _hasActiveSession
@property (nonatomic) BOOL isListening; // ivar: _isListening
@property (nonatomic) BOOL isSpeaking; // ivar: _isSpeaking
@property (readonly, nonatomic) NSUInteger notifyState;


-(id)init;
-(void)addRequestUUID:(id)arg0 ;
-(void)removeRequestUUID:(id)arg0 ;


@end


#endif