// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCORECODECOVERAGE_H
#define SUCORECODECOVERAGE_H


#import <Foundation/Foundation.h>


@interface SUCoreCodeCoverage : NSObject



+(id)getCodeCoveragePathForName:(id)arg0 ;
+(void)_handleSignal:(int)arg0 forName:(id)arg1 ;
+(void)dumpCodeCoverageForName:(id)arg0 ;
+(void)initializeForName:(id)arg0 ;
+(void)resetCodeCoverageForName:(id)arg0 ;


@end


#endif