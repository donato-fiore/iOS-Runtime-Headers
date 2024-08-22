// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFCALLSTATESNAPSHOTMUTATION_H
#define _AFCALLSTATESNAPSHOTMUTATION_H

@class NSString;
@protocol AFCallStateSnapshotMutating;

#import <Foundation/Foundation.h>

#import "AFCallStateSnapshot.h"

@interface _AFCallStateSnapshotMutation : NSObject <AFCallStateSnapshotMutating>

 {
    AFCallStateSnapshot *_base;
    NSUInteger _callState;
    BOOL _onSpeaker;
    BOOL _isDropInCall;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getIsDropInCall;
-(BOOL)getOnSpeaker;
-(BOOL)isDirty;
-(NSUInteger)getCallState;
-(id)initWithBase:(id)arg0 ;
-(void)setCallState:(NSUInteger)arg0 ;
-(void)setIsDropInCall:(BOOL)arg0 ;
-(void)setOnSpeaker:(BOOL)arg0 ;


@end


#endif