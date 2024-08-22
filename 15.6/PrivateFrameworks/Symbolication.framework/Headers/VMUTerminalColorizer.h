// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUTERMINALCOLORIZER_H
#define VMUTERMINALCOLORIZER_H


#import <Foundation/Foundation.h>


@interface VMUTerminalColorizer : NSObject



+(id)colorize:(id)arg0 withColor:(unsigned int)arg1 bold:(BOOL)arg2 ;
+(id)controlCodeResetString;
+(id)startColorCodeString:(unsigned int)arg0 ;


@end


#endif