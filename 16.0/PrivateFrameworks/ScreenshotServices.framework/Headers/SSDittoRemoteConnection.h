// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSDITTOREMOTECONNECTION_H
#define SSDITTOREMOTECONNECTION_H

@class FBSOpenApplicationService;

#import <Foundation/Foundation.h>


@interface SSDittoRemoteConnection : NSObject {
    FBSOpenApplicationService *_openApplicationService;
}




-(id)init;
-(void)_sendAction:(id)arg0 ;
-(void)_sendAction:(id)arg0 completion:(id)arg1 ;
-(void)preheatDittoProcess;
-(void)sendDittoProcessDocumentUpdate:(id)arg0 ;
-(void)sendDittoProcessEnvironmentDescription:(id)arg0 completion:(id)arg1 ;
-(void)sendDittoProcessImageIdentifierUpdate:(id)arg0 ;
-(void)sendDittoProcessMetadataUpdate:(id)arg0 completion:(id)arg1 ;
-(void)sendDittoProcessPreheatRequestWithPresentationMode:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif