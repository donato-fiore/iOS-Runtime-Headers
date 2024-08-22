// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APKREMOTEINSPECTOR_H
#define APKREMOTEINSPECTOR_H

@class JSContext;

#import <Foundation/Foundation.h>

#import "APKRemoteInspectorCSSAgent.h"
#import "APKRemoteInspectorDOMAgent.h"
#import "APKRemoteInspectorNetworkAgent.h"
#import "APKRemoteInspectorPageAgent.h"

@interface APKRemoteInspector : NSObject

@property (readonly, nonatomic) APKRemoteInspectorCSSAgent *CSSAgent; // ivar: _CSSAgent
@property (readonly, nonatomic) APKRemoteInspectorDOMAgent *DOMAgent; // ivar: _DOMAgent
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) JSContext *context; // ivar: _context
@property (readonly, nonatomic) APKRemoteInspectorNetworkAgent *networkAgent; // ivar: _networkAgent
@property (readonly, nonatomic) APKRemoteInspectorPageAgent *pageAgent; // ivar: _pageAgent


+(id)computedStyleWithName:(id)arg0 value:(id)arg1 ;
+(id)nodeWithIdentifier:(int)arg0 name:(id)arg1 type:(NSInteger)arg2 value:(id)arg3 ;
+(id)resourceWithURL:(id)arg0 type:(NSInteger)arg1 MIMEType:(id)arg2 ;
+(id)styleWithProperties:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)dealloc;


@end


#endif