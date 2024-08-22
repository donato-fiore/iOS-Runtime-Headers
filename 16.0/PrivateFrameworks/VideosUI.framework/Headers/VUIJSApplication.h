// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIJSAPPLICATION_H
#define VUIJSAPPLICATION_H

@class NSDictionary;
@protocol VUIJSApplication;


#import "VUIJSObject.h"

@interface VUIJSApplication : VUIJSObject <VUIJSApplication>



@property (readonly, nonatomic) NSDictionary *traitCollection;


-(void)dispatchErrorWithMessage:(id)arg0 sourceURL:(id)arg1 line:(id)arg2 ;
-(void)exitAppWithOptions:(id)arg0 ;
-(void)launchAppWithOptions:(id)arg0 ;
-(void)openURLWithOptions:(id)arg0 ;
-(void)reload:(id)arg0 ;
-(void)resumeAppWithOptions:(id)arg0 ;
-(void)suspendAppWithOptions:(id)arg0 ;
-(void)updatedAppWithOptions:(id)arg0 ;


@end


#endif