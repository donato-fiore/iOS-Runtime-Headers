// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCDUMPER_H
#define BRCDUMPER_H


#import <Foundation/Foundation.h>


@interface BRCDumper : NSObject



-(id)startStringForFgColor:(int)arg0 bgColor:(int)arg1 attr:(int)arg2 ;
-(id)stringForReset;
-(void)changeAttributes:(int)arg0 ;
-(void)changeBgColor:(int)arg0 ;
-(void)changeFgColor:(int)arg0 ;
-(void)reset;
-(void)startAttributes:(int)arg0 ;
-(void)startBgColor:(int)arg0 ;
-(void)startBgColor:(int)arg0 attr:(int)arg1 ;
-(void)startFgColor:(int)arg0 ;
-(void)startFgColor:(int)arg0 attr:(int)arg1 ;
-(void)startFgColor:(int)arg0 bgColor:(int)arg1 attr:(int)arg2 ;
-(void)write:(char *)arg0 ;


@end


#endif