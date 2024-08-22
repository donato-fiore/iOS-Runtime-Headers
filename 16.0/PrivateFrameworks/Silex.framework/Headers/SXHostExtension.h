// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXHOSTEXTENSION_H
#define SXHOSTEXTENSION_H

@class NSString, NSExtensionContext;
@protocol SXHost;

#import <Foundation/Foundation.h>


@interface SXHostExtension : NSObject <SXHost>



@property (readonly, nonatomic) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSExtensionContext *extensionContext; // ivar: _extensionContext
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly) Class superclass;


-(BOOL)canOpenURL:(id)arg0 ;
-(id)initWithExtensionContext:(id)arg0 ;
-(void)extensionHostDidBecomeActive:(id)arg0 ;
-(void)extensionHostDidEnterBackground:(id)arg0 ;
-(void)extensionHostWillEnterForeground:(id)arg0 ;
-(void)openURL:(id)arg0 completion:(id)arg1 ;


@end


#endif