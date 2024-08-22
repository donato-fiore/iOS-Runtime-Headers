// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HPSACCESSORYSETTINGSERVICECONNECTIONPROVIDER_H
#define _HPSACCESSORYSETTINGSERVICECONNECTIONPROVIDER_H

@class NSXPCConnection, NSString;
@protocol HPSAccessorySettingServiceConnectionProvider;

#import <Foundation/Foundation.h>


@interface _HPSAccessorySettingServiceConnectionProvider : NSObject <HPSAccessorySettingServiceConnectionProvider>



@property (readonly, nonatomic) NSXPCConnection *accessorySettingServiceConnection; // ivar: _accessorySettingServiceConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif