// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGPLAINTEXTCONTENTCURSOR_H
#define SGPLAINTEXTCONTENTCURSOR_H

@class NSIndexSet;

#import <Foundation/Foundation.h>


@interface SGPlainTextContentCursor : NSObject {
    NSIndexSet *_quoted;
    *__CFString _str;
    NSUInteger _len;
    ? _ib;
}


@property (nonatomic) NSUInteger pos; // ivar: _pos


-(BOOL)backward;
-(BOOL)backwardToString:(id)arg0 consume:(BOOL)arg1 ;
-(BOOL)forward;
-(BOOL)forwardToString:(id)arg0 consume:(BOOL)arg1 ;
-(id)init;
-(id)initWithMailMessage:(id)arg0 ;
-(void)backwardWhile:(id)arg0 ;
-(void)dealloc;
-(void)forwardWhile:(id)arg0 ;
-(void)seekToEnd;
-(void)seekToStart;


@end


#endif