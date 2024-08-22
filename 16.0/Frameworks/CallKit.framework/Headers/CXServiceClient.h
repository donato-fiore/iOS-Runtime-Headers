// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXSERVICECLIENT_H
#define CXSERVICECLIENT_H

@class NSString, NSURL, BSServiceConnection<BSServiceConnectionHost>;
@protocol CXServiceClientDelegate;

#import <Foundation/Foundation.h>


@interface CXServiceClient : NSObject

@property (readonly, nonatomic) ? auditToken;
@property (readonly, nonatomic) NSInteger backgroundModeOptions; // ivar: _backgroundModeOptions
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<CXServiceClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic, getter=isPermittedToUseBluetoothAccessories) BOOL permittedToUseBluetoothAccessories;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI; // ivar: _permittedToUsePrivateAPI
@property (readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL permittedToUsePublicAPI;
@property (readonly, nonatomic) int processIdentifier;


-(id)description;
-(id)initWithConnection:(id)arg0 ;
-(void)invalidate;


@end


#endif