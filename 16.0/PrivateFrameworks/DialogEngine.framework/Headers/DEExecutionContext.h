// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEEXECUTIONCONTEXT_H
#define DEEXECUTIONCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DEExecutionContext : NSObject

@property shared_ptr<siri::dialogengine::Context> SharedThis; // ivar: _SharedThis
@property *void This; // ivar: _This
@property (readonly) NSString *loadStatus;
@property (readonly) NSString *locale;


+(id)globalParameters;
-(?)initWithPtr;
-(BOOL)isBuiltinType:(id)arg0 ;
-(BOOL)load:(id)arg0 locale:(id)arg1 ;
-(BOOL)needsUpgrade:(id)arg0 ;
-(id)findVariable:(id)arg0 ;
-(id)getBuiltinSemanticConcepts;
-(id)getFile;
-(id)init;
-(id)upgrade:(id)arg0 ;
-(void)addVariable:(id)arg0 ;
-(void)enableDebugLogging;
-(void)registerMorphunDataPathFor:(id)arg0 path:(id)arg1 ;
-(void)setFile:(id)arg0 ;
-(void)setTemplateDir:(id)arg0 ;


@end


#endif