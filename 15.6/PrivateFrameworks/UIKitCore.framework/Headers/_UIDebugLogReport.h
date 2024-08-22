// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDEBUGLOGREPORT_H
#define _UIDEBUGLOGREPORT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _UIDebugLogReport : NSObject

@property (nonatomic) NSUInteger currentIndentLevel; // ivar: _currentIndentLevel
@property (copy, nonatomic) id *fallbackMessagePrefixHandler; // ivar: _fallbackMessagePrefixHandler
@property (readonly, nonatomic) NSUInteger messageCount;
@property (retain, nonatomic, getter=_prefixStack) NSMutableArray *prefixStack; // ivar: _prefixStack
@property (retain, nonatomic, getter=_statements) NSMutableArray *statements; // ivar: _statements


-(id)_messagePrefixAtIndentLevel:(NSUInteger)arg0 ;
-(id)init;
-(void)addLineBreak;
-(void)addMessage:(id)arg0 ;
-(void)addMessageWithFormat:(id)arg0 ;
-(void)clearAllMessagePrefixes;
-(void)decrementIndentLevel;
-(void)decrementIndentLevelAndPopMessagePrefix;
-(void)incrementIndentLevel;
-(void)incrementIndentLevelAndPushMessagePrefix:(id)arg0 ;
-(void)popMessagePrefix;
-(void)pushMessagePrefix:(id)arg0 ;
-(void)pushMessagePrefixHandler:(id)arg0 ;
-(void)resetIndentLevel;


@end


#endif