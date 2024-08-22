// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CORNOBBLETESTRUNNER_H
#define CORNOBBLETESTRUNNER_H

@class NSString;
@protocol CornobbleTestRunnerProtocol;

#import <Foundation/Foundation.h>


@interface CornobbleTestRunner : NSObject <CornobbleTestRunnerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isCornobbleAvailable;
+(void)performFingerOnGlassScrollTestNamed:(id)arg0 withParameters:(id)arg1 completionHandler:(id)arg2 ;
+(void)performFingerOnGlassScrollWithParameters:(id)arg0 ;
+(void)performStandardScrollingTestNamed:(id)arg0 onScrollView:(id)arg1 ;
+(void)performStandardScrollingTestNamed:(id)arg0 onScrollView:(id)arg1 iterations:(NSUInteger)arg2 ;
+(void)performStandardScrollingTestNamed:(id)arg0 onScrollView:(id)arg1 iterations:(NSUInteger)arg2 canFlick:(BOOL)arg3 ;
+(void)performStandardScrollingTestNamed:(id)arg0 onScrollView:(id)arg1 iterations:(NSUInteger)arg2 canFlick:(BOOL)arg3 completionHandler:(id)arg4 ;
+(void)performStandardScrollingTestNamed:(id)arg0 onScrollView:(id)arg1 iterations:(NSUInteger)arg2 pages:(NSUInteger)arg3 canFlick:(BOOL)arg4 completionHandler:(id)arg5 ;
+(void)performStandardScrollingTestNamed:(id)arg0 onScrollView:(id)arg1 iterations:(NSUInteger)arg2 pages:(NSUInteger)arg3 direction:(NSInteger)arg4 canFlick:(BOOL)arg5 completionHandler:(id)arg6 ;
+(void)performTestNamed:(id)arg0 usingComposer:(id)arg1 ;
// +(void)performTestNamed:(id)arg0 usingComposer:(id)arg1 completionHandler:(unk)arg2  ;
+(void)performTestNamed:(id)arg0 withEventStream:(id)arg1 ;
+(void)performTestNamed:(id)arg0 withEventStream:(id)arg1 completionHandler:(id)arg2 ;
+(void)performTestNamed:(id)arg0 withRecapCommandString:(id)arg1 onView:(id)arg2 ;
+(void)performTestNamed:(id)arg0 withRecapCommandString:(id)arg1 onView:(id)arg2 completionHandler:(id)arg3 ;
+(void)performTestNamed:(id)arg0 withRecapFile:(id)arg1 onView:(id)arg2 ;
+(void)performTestNamed:(id)arg0 withRecapFile:(id)arg1 onView:(id)arg2 completionHandler:(id)arg3 ;
+(void)playInteraction:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif