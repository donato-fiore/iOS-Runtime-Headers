// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCVEGASCRIPTS_H
#define CCVEGASCRIPTS_H


#import <Foundation/Foundation.h>


@interface CCVegaScripts : NSObject



+(id)loadScriptWithName:(id)arg0 source:(id)arg1 inVirtualMachine:(id)arg2 ;
+(id)stringForScriptData:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)vegaJS;
+(id)vegaliteJS;
+(void)evaluateBootstrapScriptsInContext:(id)arg0 ;
+(void)evaluateScriptWithName:(id)arg0 source:(id)arg1 inContext:(id)arg2 ;
+(void)evaluateVegaLiteScriptInContext:(id)arg0 ;


@end


#endif