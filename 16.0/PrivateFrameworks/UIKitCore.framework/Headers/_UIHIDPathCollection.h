// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIHIDPATHCOLLECTION_H
#define _UIHIDPATHCOLLECTION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UIHIDPathCollection : NSObject {
    NSMutableDictionary *_pathsById;
    CGPoint _position;
    unsigned int _buttonMask;
    NSUInteger _machTimestamp;
    unsigned char _locus;
    *__IOHIDEvent _hidEvent;
}


@property (nonatomic) NSUInteger digitizerSenderID; // ivar: _digitizerSenderID
@property (nonatomic) unsigned int fallbackContextId; // ivar: _fallbackContextId
@property (readonly, nonatomic) NSUInteger pathCount;


-(BOOL)hasPathWithId:(id)arg0 ;
-(id)hidEventFromCurrentState;
-(id)init;
-(id)pathWithId:(id)arg0 ;
-(id)pathsInPhase:(NSInteger)arg0 ;
-(id)pathsTouching;
-(struct __IOHIDEvent *)_createCollectionEventForEvent:(struct __IOHIDEvent *)arg0 ;
-(unsigned int)_collectionMask;
-(void)addPath:(id)arg0 ;
-(void)dealloc;
-(void)removePath:(id)arg0 ;
-(void)updateEventTimestamp:(NSUInteger)arg0 ;
-(void)updateWithHIDEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif