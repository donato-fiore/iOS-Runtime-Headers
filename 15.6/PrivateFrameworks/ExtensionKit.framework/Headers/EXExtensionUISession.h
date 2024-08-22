// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXEXTENSIONUISESSION_H
#define EXEXTENSIONUISESSION_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, NSSecureCoding;


#import "EXUISession.h"
#import "_EXRunningUIExtension.h"
#import "_EXExtensionViewController.h"
#import "_EXExtensionRootViewController.h"

@interface EXExtensionUISession : EXUISession <NSXPCListenerDelegate, NSSecureCoding>



@property BOOL connectionAccepted; // ivar: _connectionAccepted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) _EXRunningUIExtension *extension; // ivar: _extension
@property (readonly) _EXExtensionViewController *extensionViewController; // ivar: _extensionViewController
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;
@property (retain) _EXExtensionRootViewController *viewController; // ivar: _viewController


+(BOOL)supportsSecureCoding;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 extension:(id)arg1 sceneIdentifier:(id)arg2 ;
-(id)makeExtensionViewController;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif