// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXNETWORKEXTENSIONMESSAGECONTROLLER_H
#define CXNETWORKEXTENSIONMESSAGECONTROLLER_H

@protocol CXNetworkExtensionMessageControllerDataSource;

#import <Foundation/Foundation.h>


@interface CXNetworkExtensionMessageController : NSObject

@property (readonly, nonatomic) NSObject<CXNetworkExtensionMessageControllerDataSource> *dataSource; // ivar: _dataSource


-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)sendNetworkExtensionMessage:(id)arg0 forBundleIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif