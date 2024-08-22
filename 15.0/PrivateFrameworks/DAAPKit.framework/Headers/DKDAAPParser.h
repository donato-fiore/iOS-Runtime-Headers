// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKDAAPPARSER_H
#define DKDAAPPARSER_H

@class NSMutableArray, NSInputStream;
@protocol DKDAAPParserDelegate;

#import <Foundation/Foundation.h>


@interface DKDAAPParser : NSObject

@property (nonatomic, getter=isCanceled) BOOL canceled; // ivar: _canceled
@property (readonly, nonatomic) NSMutableArray *containerStack; // ivar: _containerStack
@property (weak, nonatomic) NSObject<DKDAAPParserDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(BOOL)_callDelegateShouldParseCode:(unsigned int)arg0 ;
-(BOOL)_callDelegateShouldParseCodeAsContainer:(unsigned int)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithStream:(id)arg0 ;
-(void)_callDelegateDidCancel;
-(void)_callDelegateDidEndContainerCode:(unsigned int)arg0 ;
-(void)_callDelegateDidFailWithError:(id)arg0 ;
-(void)_callDelegateDidFinish;
-(void)_callDelegateDidParseDataCode:(unsigned int)arg0 bytes:(char *)arg1 contentLength:(unsigned int)arg2 ;
-(void)_callDelegateDidStart;
-(void)_callDelegateDidStartContainerCode:(unsigned int)arg0 contentLength:(unsigned int)arg1 ;
-(void)_verifyExpectedEOF;
-(void)cancel;
-(void)parse;


@end


#endif