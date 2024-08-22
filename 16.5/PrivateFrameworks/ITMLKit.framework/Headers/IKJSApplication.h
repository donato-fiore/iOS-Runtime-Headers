// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSAPPLICATION_H
#define IKJSAPPLICATION_H

@class NSString, NSDictionary;
@protocol NSObject, IKJSApplication, _IKJSApplicationProxy, _IKJSApplication;


#import "IKJSObject.h"

@interface IKJSApplication : IKJSObject <NSObject, IKJSApplication, _IKJSApplicationProxy, _IKJSApplication>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *traitCollection;


-(BOOL)requestDocumentWithContext:(id)arg0 response:(id)arg1 ;
-(id)asPrivateIKJSApplication;
-(void)dispatchErrorWithMessage:(id)arg0 sourceURL:(id)arg1 line:(id)arg2 ;
-(void)exitAppWithOptions:(id)arg0 ;
-(void)launchAppWithOptions:(id)arg0 ;
-(void)openURLWithOptions:(id)arg0 ;
-(void)reload:(id)arg0 ;
-(void)resumeAppWithOptions:(id)arg0 ;
-(void)suspendAppWithOptions:(id)arg0 ;
-(void)traitCollectionChanged:(id)arg0 ;
-(void)update;
-(void)updatedAppWithOptions:(id)arg0 ;


@end


#endif