// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBSCRIPTWORLD_H
#define WEBSCRIPTWORLD_H


#import <Foundation/Foundation.h>

#import "WebScriptWorldPrivate.h"

@interface WebScriptWorld : NSObject {
    WebScriptWorldPrivate *_private;
}




+(id)findOrCreateWorld:(*void)arg0 ;
+(id)scriptWorldForGlobalContext:(struct OpaqueJSContext *)arg0 ;
+(id)scriptWorldForJavaScriptContext:(id)arg0 ;
+(id)standardWorld;
+(id)world;
-(id)init;
-(id)initWithWorld:(*void)arg0 ;
-(void)dealloc;
-(void)unregisterWorld;


@end


#endif