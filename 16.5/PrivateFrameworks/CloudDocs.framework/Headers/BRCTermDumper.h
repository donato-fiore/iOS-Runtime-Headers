// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCTERMDUMPER_H
#define BRCTERMDUMPER_H



#import "BRCDumper.h"

@interface BRCTermDumper : BRCDumper {
    *__sFILE _file;
    BOOL _fileNeedsClosing;
    NSUInteger _termWidth;
    NSUInteger _usedTermWidth;
    int _curAttrs;
    int _curFg;
    int _curBg;
    BOOL _darkMode;
}


@property (readonly, nonatomic) BOOL isatty; // ivar: _isatty
@property (readonly, nonatomic) BOOL supportsEscapeSequences; // ivar: _supportsEscapeSequences
@property (readonly, nonatomic) BOOL useColor; // ivar: _useColor


+(void)execPagerOnFileFd:(int)arg0 ;
+(void)setupPagerForFd:(int)arg0 ;
-(NSUInteger)_startInCString:(char)arg0 fgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(NSUInteger)remainingSpace;
-(id)initWithFd:(int)arg0 forceColor:(BOOL)arg1 ;
-(id)initWithFd:(int)arg0 forceColor:(BOOL)arg1 darkMode:(BOOL)arg2 ;
-(id)initWithFile:(struct __sFILE *)arg0 forceColor:(BOOL)arg1 ;
-(id)initWithFile:(struct __sFILE *)arg0 forceColor:(BOOL)arg1 darkMode:(BOOL)arg2 closeOnDeinit:(BOOL)arg3 ;
-(id)startStringForFgColor:(int)arg0 bgColor:(int)arg1 attr:(int)arg2 ;
-(id)stringForReset;
-(int)_transformToDarkMode:(int)arg0 ;
-(void)_putsAndCrop:(char *)arg0 len:(NSUInteger)arg1 ;
-(void)cursorDown:(unsigned int)arg0 ;
-(void)cursorGotoLineStart;
-(void)cursorLeft:(unsigned int)arg0 ;
-(void)cursorRestore;
-(void)cursorRight:(unsigned int)arg0 ;
-(void)cursorSave;
-(void)cursorUp:(unsigned int)arg0 ;
-(void)dealloc;
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
-(void)startFgColor:(int)arg0 bgColor:(int)arg1 attr:(int)arg2 ;
-(void)startNewLine;
-(void)startPager;
-(void)write:(char *)arg0 ;


@end


#endif