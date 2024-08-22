// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPCTLTERMDUMPER_H
#define FPCTLTERMDUMPER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FPCTLTermDumper : NSObject <NSSecureCoding>

 {
    NSUInteger _termWidth;
    NSUInteger _usedTermWidth;
    int _curAttrs;
    int _curFg;
    int _curBg;
    BOOL _eightBitColor;
}


@property (readonly, nonatomic) int fd; // ivar: _fd
@property (readonly, nonatomic) BOOL isatty; // ivar: _isatty
@property (readonly, nonatomic) BOOL supportsEscapeSequences; // ivar: _supportsEscapeSequences
@property (readonly, nonatomic) BOOL useColor; // ivar: _useColor


+(BOOL)supportsSecureCoding;
+(void)execPagerOnFileFd:(int)arg0 ;
+(void)setupPagerForFd:(int)arg0 ;
-(NSUInteger)_startInCString:(char)arg0 fgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(NSUInteger)remainingSpace;
-(id)annotateString:(id)arg0 markedIdentifiers:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFd:(int)arg0 forceColor:(BOOL)arg1 ;
-(id)startStringForFgColor:(int)arg0 bgColor:(int)arg1 attr:(int)arg2 ;
-(id)stringForReset;
-(void)_putsAndCrop:(char *)arg0 len:(NSUInteger)arg1 ;
-(void)changeAttributes:(int)arg0 ;
-(void)changeBgColor:(int)arg0 ;
-(void)changeFgColor:(int)arg0 ;
-(void)cursorDown:(unsigned int)arg0 ;
-(void)cursorGotoLineStart;
-(void)cursorLeft:(unsigned int)arg0 ;
-(void)cursorRestore;
-(void)cursorRight:(unsigned int)arg0 ;
-(void)cursorSave;
-(void)cursorUp:(unsigned int)arg0 ;
-(void)dumpImage:(id)arg0 characterWidth:(NSUInteger)arg1 characterHeight:(NSUInteger)arg2 ;
-(void)dumpImage:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
-(void)dumpProgress:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endLine;
-(void)eraseEndOfLine;
-(void)eraseLine;
-(void)eraseScreenDown;
-(void)eraseScreenUp;
-(void)eraseStartOfLine;
-(void)forgetRemainingSpace;
-(void)put:(id)arg0 ;
-(void)puts:(char *)arg0 ;
-(void)puts:(char *)arg0 len:(NSUInteger)arg1 ;
-(void)reset;
-(void)startAttributes:(int)arg0 ;
-(void)startBgColor:(int)arg0 ;
-(void)startBgColor:(int)arg0 attr:(int)arg1 ;
-(void)startFgColor:(int)arg0 ;
-(void)startFgColor:(int)arg0 attr:(int)arg1 ;
-(void)startFgColor:(int)arg0 bgColor:(int)arg1 attr:(int)arg2 ;
-(void)startNewLine;
-(void)startPager;
-(void)write:(id)arg0 ;


@end


#endif