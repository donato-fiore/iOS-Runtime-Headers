// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOEXTENSIONVIEWSERVICE_H
#define SOEXTENSIONVIEWSERVICE_H

@class UIViewController, NSString;
@protocol SORemoteExtensionViewProtocol;


#import "SORemoteExtensionContext.h"

@interface SOExtensionViewService : UIViewController <SORemoteExtensionViewProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) SORemoteExtensionContext *extensionContext; // ivar: _extensionContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)exportedInterface;
-(id)remoteViewControllerInterface;
-(void)_connectChildView;
-(void)connectToContextWithSessionID:(id)arg0 completion:(id)arg1 ;
-(void)loadView;


@end


#endif